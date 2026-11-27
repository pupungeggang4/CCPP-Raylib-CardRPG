#include "asset.h"

Asset asset = {0};

void assetLoad(Asset* asset) {
    asset->texture[T_MENU] = LoadTexture("asset/image/button_menu.png");
    asset->texture[T_INVENTORY] = LoadTexture("asset/image/inventory.png");
    asset->texture[T_INTERACT] = LoadTexture("asset/image/interact.png");
    asset->texture[T_MAP] = LoadTexture("asset/image/map.png");
    asset->texture[T_ARROW_LEFT] = LoadTexture("asset/image/arrow_left.png");
    asset->texture[T_ARROW_RIGHT] = LoadTexture("asset/image/arrow_right.png");
    asset->texture[T_ARROW_UP] = LoadTexture("asset/image/arrow_up.png");
    asset->texture[T_ARROW_DOWN] = LoadTexture("asset/image/arrow_down.png");

    asset->texture[T_ENTITY] = LoadTexture("asset/image/entity.png");
}

void assetDispose(Asset* asset) {
    for (int i = 0; i < 100; i++) {
        if (asset->texture[i].id > 0) {
            UnloadTexture(asset->texture[i]);
        }
    }
}
