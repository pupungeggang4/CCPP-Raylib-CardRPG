#include "scene.h"
#include "asset.h"
#include "ui.h"
#include "render.h"

#include "field.h"
#include "fieldhandler.h"
#include "gamevar.h"

void sceneInventoryRender(GameVar* gameVar) {
    drawRect(uiInventory.rect, YELLOW);
    drawRect(uiInventory.buttonClose, RED);
}

void sceneInventoryMouseUp(GameVar* gameVar, Vector2 pos, int button) {
    if (CheckCollisionPointRec(pos, uiInventory.buttonClose)) gameVar->state = ST_NORMAL;
}

void sceneInventoryKeyDown(GameVar* gameVar) {
    if (IsKeyPressed(KEY_I)) gameVar->state = ST_NORMAL;
}
