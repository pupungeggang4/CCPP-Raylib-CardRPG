#include "scene.h"

#include "ui.h"
#include "render.h"

#include "gamevar.h"

void sceneFieldReady(GameVar* gameVar) {

}

void sceneFieldUpdate(GameVar* gameVar) {

}

void sceneFieldRender(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    drawRect(uiField.buttonMenu, BLUE);

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

}
