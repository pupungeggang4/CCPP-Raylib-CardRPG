#include "scene.h"

#include "asset.h"
#include "ui.h"
#include "render.h"

#include "gamevar.h"

void sceneFieldReady(GameVar* gameVar) {

}

void sceneFieldUpdate(GameVar* gameVar) {

}

void sceneFieldRender(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    drawTexture(asset.texture[T_MENU], uiField.buttonMenu);
    drawTexture(asset.texture[T_INVENTORY], uiField.buttonInventory);
    drawTexture(asset.texture[T_INTERACT], uiField.buttonInteract);
    drawTexture(asset.texture[T_MAP], uiField.buttonMap);

    drawTexture(asset.texture[T_ARROW_LEFT], uiField.buttonLeft);
    drawTexture(asset.texture[T_ARROW_RIGHT], uiField.buttonRight);
    drawTexture(asset.texture[T_ARROW_UP], uiField.buttonUp);
    drawTexture(asset.texture[T_ARROW_DOWN], uiField.buttonDown);

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
    }
}

void sceneFieldMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (button == LEFT) {
        if (gameVar->menu) {
            sceneMenuFieldMouseUp(gameVar, pos, button);
            if (CheckCollisionPointRec(pos, uiField.buttonMenu)) gameVar->menu = FALSE;
        } else {
            if (CheckCollisionPointRec(pos, uiField.buttonMenu)) gameVar->menu = TRUE;
        }
    }
}
