#include "asset.h"

#include "render.h"

#include "field.h"
#include "fieldhandler.h"

#include "gamevar.h"

void playerInit(GameVar* gameVar, Field* field) {
    FieldPlayer* player = &field->player;
    player->pos.x = 0; player->pos.y = 0;
    player->size.x = 40; player->size.y = 40;
}

void playerUpdate(GameVar* gameVar, Field* field) {

}

void playerRender(GameVar* gameVar, Field* field) {
    FieldPlayer* player = &field->player;
    Rectangle rect = {
        player->pos.x - player->size.x / 2.0f - field->camera.x + field->camera.width / 2.0f,
        player->pos.y - player->size.y / 2.0f - field->camera.y + field->camera.height / 2.0f,
        player->size.x, player->size.y
    };
    drawRect(rect, BLUE);
}

void fieldInit(GameVar* gameVar, Field* field) {
    field->camera.x = 0; field->camera.y = 0;
    field->camera.width = 800; field->camera.height = 600;
    playerInit(gameVar, field);
}

void fieldUpdate(GameVar* gameVar, Field* field) {

}

void fieldRender(GameVar* gameVar, Field* field) {
    playerRender(gameVar, field);
}
