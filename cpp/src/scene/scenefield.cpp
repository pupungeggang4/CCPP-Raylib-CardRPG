#include "scene.hpp"

#include "asset.hpp"
#include "ui.hpp"
#include "savedata.hpp"

#include "util.hpp"
#include "render.hpp"

#include "field.hpp"

#include "game.hpp"

SceneField::SceneField() {
    menuField = make_shared<MenuField>();
    windowInventory = make_shared<WindowInventory>();
}

void SceneField::ready(Game& game) {
    game.menu = false;
}

void SceneField::update(Game& game) {
    if (game.menu == false) {
        if (game.state == NORMAL) {
            game.field->update(game);
        }
    }
}

void SceneField::render(Game& game) {
    game.field->render(game);

    Render::drawText("WASD Move I Inventory E Interact", UI::UIField["text_key"]);
    Render::drawTexture(Asset::texture["button_menu"], UI::UIField["button_menu"]);

    if (game.state == INVENTORY) windowInventory->render(game);
    else if (game.state == SAVE_CONFIRM) renderSave(game);
    if (game.menu) {
        menuField->render(game);
    }
}

void SceneField::renderSave(Game& game) {
    Render::drawRect(UI::UISave["rect"], YELLOW);
    Render::drawText("Save?", UI::UISave["text_title"]);
    Render::drawRect(UI::UISave["button_yes"], PINK);
    Render::drawText("Yes [Y]", UI::UISave["text_yes"]);
    Render::drawRect(UI::UISave["button_no"], PINK);
    Render::drawText("No [N]", UI::UISave["text_no"]);
}

void SceneField::keyDown(Game& game) {
    if (game.menu) {
        menuField->keyDown(game);
        if (IsKeyPressed(KEY_ESCAPE)) {
            game.menu = false;
        }
    } else {
        if (IsKeyPressed(KEY_ESCAPE)) {
            game.menu = true;
        }

        if (game.state == NORMAL) {
            if (IsKeyPressed(KEY_I)) {
                game.state = INVENTORY;
            } else if (IsKeyPressed(KEY_E)) {
                game.field->interact(game);
            }
        } else if (game.state == INVENTORY) {
            if (IsKeyPressed(KEY_I)) {
                game.state = NORMAL;
            }
            windowInventory->keyDown(game);
        } else if (game.state == SAVE_CONFIRM) {
            if (IsKeyPressed(KEY_Y)) {
                SaveData::writeSaveData(game);
                game.state = NORMAL;
            } else if (IsKeyPressed(KEY_N)) game.state = NORMAL;
        }
    }
}

void SceneField::mouseUp(Game& game, Vector2 pos) {
    if (game.menu) {
        menuField->mouseUp(game, pos);
        if (Util::pointInsideRectUI(pos, UI::UIField["button_menu"])) {
            game.menu = false;
        }
    } else {
        if (Util::pointInsideRectUI(pos, UI::UIField["button_menu"])) {
            game.menu = true;
        }

        if (game.state == NORMAL) {

        } else if (game.state == SAVE_CONFIRM) {
            if (Util::pointInsideRectUI(pos, UI::UISave["button_yes"])) {
                SaveData::writeSaveData(game);
                game.state = NORMAL;
            } else if (Util::pointInsideRectUI(pos, UI::UISave["button_no"])) {
                game.state = NORMAL;
            }
        }
    }
}

