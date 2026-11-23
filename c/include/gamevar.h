#ifndef GAMEVAR_H
#define GAMEVAR_H

#include "includes.h"
#include "types.h"

struct SceneTitleVar {
    int selected;
};

struct SceneFileVar {
    int selected;
};

struct SceneFieldVar {
    int selected;
};

struct SceneBattleVar {
    int selected;
};

struct GameVar {
    int running; int width; int height; float aspRatio;
    float dt;
    int scene; int state; int menu; int sceneNext;

    Camera2D camera;

    SceneTitleVar sceneTitleVar;
    SceneFileVar sceneFileVar;
    SceneFieldVar sceneFieldVar;
    SceneBattleVar sceneBattleVar;
};

extern GameVar gameVar;

#endif
