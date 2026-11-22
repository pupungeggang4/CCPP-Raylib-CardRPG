#include "asset.hpp"

std::unordered_map<std::string, Texture2D> Asset::texture;

void Asset::assetLoad() {
    texture.emplace("button_menu", LoadTexture("asset/image/button_menu.png"));
    texture.emplace("entity", LoadTexture("asset/image/entity.png"));
    texture.emplace("arrow", LoadTexture("asset/image/arrow.png"));
    texture.emplace("player", LoadTexture("asset/image/player.png"));
    texture.emplace("map", LoadTexture("asset/image/map.png"));
    texture.emplace("interact", LoadTexture("asset/image/interact.png"));
    texture.emplace("inventory", LoadTexture("asset/image/inventory.png"));
    texture.emplace("arrow_left", LoadTexture("asset/image/arrow_left.png"));
    texture.emplace("arrow_right", LoadTexture("asset/image/arrow_right.png"));
    texture.emplace("arrow_up", LoadTexture("asset/image/arrow_up.png"));
    texture.emplace("arrow_down", LoadTexture("asset/image/arrow_down.png"));
}

void Asset::assetDispose() {
    for (auto& pair : texture) {
        UnloadTexture(pair.second);
    }

    texture.clear();
}
