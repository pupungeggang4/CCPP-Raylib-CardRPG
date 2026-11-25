#include "scene.h"

#include "ui.h"
#include "render.h"

#include "gamevar.h"

void sceneMenuFieldReady(GameVar* gameVar) {
    gameVar->sceneFieldVar.selectedMenu = 0;
}

void sceneMenuFieldRender(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;
    drawRect(uiMenuField.rect, YELLOW);
    if (sceneVar->selectedMenu == 0) drawRect(uiMenuField.buttonResume, PINK);
    else if (sceneVar->selectedMenu == 1) drawRect(uiMenuField.buttonExit, PINK);
    else if (sceneVar->selectedMenu == 2) drawRect(uiMenuField.buttonQuit, PINK);
    drawText("Paused", uiMenuField.textPaused, 20, BLACK);
    drawText("Resume", uiMenuField.textResume, 20, BLACK);
    drawText("Exit to Title", uiMenuField.textExit, 20, BLACK);
    drawText("Quit Game", uiMenuField.textQuit, 20, BLACK);
}

void sceneMenuFieldKeyDown(GameVar* gameVar) {
    SceneFieldVar* sceneVar = &gameVar->sceneFieldVar;

    if (IsKeyPressed(KEY_W) || IsKeyPressed(KEY_UP)) sceneVar->selectedMenu = (sceneVar->selectedMenu + 2) % 3;
    else if (IsKeyPressed(KEY_S) || IsKeyPressed(KEY_DOWN)) sceneVar->selectedMenu = (sceneVar->selectedMenu + 1) % 3;
    else if (IsKeyPressed(KEY_ENTER)) {
        if (sceneVar->selectedMenu == 0) gameVar->menu = FALSE;
        else if (sceneVar->selectedMenu == 1) {
            gameVar->menu = FALSE;
            gameVar->sceneNext = S_TITLE;
        } else if (sceneVar->selectedMenu == 2) {
            gameVar->running = FALSE;
        }
    }
}

void sceneMenuFieldMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (CheckCollisionPointRec(pos, uiMenuField.buttonResume)) gameVar->menu = FALSE;
    else if (CheckCollisionPointRec(pos, uiMenuField.buttonExit)) {
        gameVar->menu = FALSE;
        gameVar->sceneNext = S_TITLE;
    } else if (CheckCollisionPointRec(pos, uiMenuField.buttonQuit)) gameVar->running = FALSE;
}
