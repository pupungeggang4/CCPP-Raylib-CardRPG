#include "scene.h"

#include "ui.h"
#include "render.h"

#include "gamevar.h"

void sceneFileReady(GameVar* gameVar) {

}

void sceneFileUpdate(GameVar* gameVar) {

}

void sceneFileRender(GameVar* gameVar) {
    SceneFileVar* sceneVar = &gameVar->sceneFileVar;
    drawText("Select File", uiFile.textTitle, 20, BLACK);

    for (int i = 0; i < 3; i++) {
        drawRect(uiFile.buttonFile[i], YELLOW);
    }

    drawRect(uiFile.buttonFile[sceneVar->selected], PINK);
    drawRect(uiFile.buttonDelete, YELLOW);
}

void sceneFileKeyDown(GameVar* gameVar) {
    SceneFileVar* sceneVar = &gameVar->sceneFileVar;

    if (IsKeyPressed(KEY_A) || IsKeyPressed(KEY_LEFT)) sceneVar->selected = (sceneVar->selected + 2) % 3;
    else if (IsKeyPressed(KEY_D) || IsKeyPressed(KEY_RIGHT)) sceneVar->selected = (sceneVar->selected + 1) % 3;
    else if (IsKeyPressed(KEY_ENTER)) {
        gameVar->sceneNext = S_FIELD;
    }
}

void sceneFileMouseUp(GameVar* gameVar, Vector2 pos, int button) {

}
