#include "savedata.hpp"
#include "field.hpp"
#include "game.hpp"

std::array<int, 3> SaveData::dataField = {0, 0, 0};

void SaveData::loadSaveData() {
    std::ifstream file("save/save.txt");
    if (!file.is_open()) {
        file.close();
        std::ofstream tempFile("save/save.txt");
        tempFile << 0 << ' ' << 0 << ' ' << 0 << std::endl;
        tempFile.close();
        file.open("save/save.txt");
    }
    std::string line;
    std::getline(file, line);
    std::istringstream s(line);
    s >> dataField[0] >> dataField[1] >> dataField[2];
}

void SaveData::readSaveData(Game& game) {
    game.field->place = SaveData::dataField[0];
    game.field->player.cellPos.x = SaveData::dataField[1];
    game.field->player.cellPos.y = SaveData::dataField[2];
    game.field->player.pos.x = SaveData::dataField[1] * 40;
    game.field->player.pos.y = SaveData::dataField[2] * 40;
}

void SaveData::writeSaveData(Game& game) {
    std::ofstream file("save/save.txt");
    if (!file.is_open()) {
        file.close();
        std::ofstream tempFile("save/save.txt");
        tempFile << 0 << ' ' << 0 << ' ' << 0 << std::endl;
        tempFile.close();
        file.open("save/save.txt");
    } else {
        file << game.field->place << ' ' << game.field->player.cellPos.x << ' ' << game.field->player.cellPos.y << std::endl;
    }
}
