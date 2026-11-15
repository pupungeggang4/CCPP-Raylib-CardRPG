#ifndef SAVE_HPP
#define SAVE_HPP

#include "includes.hpp"

class Game;
class SaveData {
    public:
        static std::array<int, 3> dataField;
        static void loadSaveData();
        static void readSaveData(Game&);
        static void writeSaveData(Game&);
};

#endif
