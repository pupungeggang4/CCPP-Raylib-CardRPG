#ifndef GAMEVAR_H
#define GAMEVAR_H

#include "includes.h"
#include "types.h"

struct GameVar {
    int running; int width; int height; float aspRatio;
    float dt;
    int scene; int state; int menu;

    Camera2D camera;
};

extern GameVar gameVar;

#endif
