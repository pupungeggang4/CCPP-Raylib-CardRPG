#include "scene.h"
#include "asset.h"
#include "ui.h"
#include "render.h"

#include "field.h"
#include "fieldhandler.h"
#include "gamevar.h"

void sceneFieldReady(GameVar* gameVar) {

}

void sceneFieldUpdate(GameVar* gameVar) {

}

void sceneFieldRender(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    // Field
    fieldRender(gameVar, &gameVar->field);

    // UI
    drawTexture(asset.texture[T_MENU], uiField.buttonMenu);
    drawTexture(asset.texture[T_INVENTORY], uiField.buttonInventory);
    drawText("I", uiField.textInventory, 20, BLACK);
    drawTexture(asset.texture[T_INTERACT], uiField.buttonInteract);
    drawText("E", uiField.textInteract, 20, BLACK);
    drawTexture(asset.texture[T_MAP], uiField.buttonMap);
    drawText("M", uiField.textMap, 20, BLACK);

    drawTexture(asset.texture[T_ARROW_LEFT], uiField.buttonLeft);
    drawTexture(asset.texture[T_ARROW_RIGHT], uiField.buttonRight);
    drawTexture(asset.texture[T_ARROW_UP], uiField.buttonUp);
    drawTexture(asset.texture[T_ARROW_DOWN], uiField.buttonDown);

    if (gameVar->state == ST_INVENTORY) sceneInventoryRender(gameVar);
    if (gameVar->menu) sceneMenuFieldRender(gameVar);
}

void sceneFieldKeyDown(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    if (gameVar->menu) {
        if (IsKeyPressed(KEY_ESCAPE)) gameVar->menu = FALSE;
        sceneMenuFieldKeyDown(gameVar);
    } else {
        if (IsKeyPressed(KEY_ESCAPE)) {
            sceneMenuFieldReady(gameVar);
            gameVar->menu = TRUE;
        }
        if (gameVar->state == ST_NORMAL) {
            if (IsKeyPressed(KEY_I)) gameVar->state = ST_INVENTORY;
        } else if (gameVar->state == ST_INVENTORY) {
            sceneInventoryKeyDown(gameVar);
        }
    }
}

void sceneFieldMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (button == LEFT) {
        if (gameVar->menu) {
            sceneMenuFieldMouseUp(gameVar, pos, button);
            if (CheckCollisionPointRec(pos, uiField.buttonMenu)) gameVar->menu = FALSE;
        } else {
            if (CheckCollisionPointRec(pos, uiField.buttonMenu)) gameVar->menu = TRUE;
            if (gameVar->state == ST_NORMAL) {
                if (CheckCollisionPointRec(pos, uiField.buttonInventory)) gameVar->state = ST_INVENTORY;
            } else if (gameVar->state == ST_INVENTORY) {
                sceneInventoryMouseUp(gameVar, pos, button);
            }
        }
    }
}
