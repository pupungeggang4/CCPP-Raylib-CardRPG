#ifndef FIELD_H
#define FIELD_H

#include "includes.h"
#include "types.h"
#include "shape.h"

struct FieldEntity {
    int type;

    Vector2i posCell;
    Vector2 pos;
    Vector2 size;
};

struct FieldPlayer {
    Vector2i posCell;
    Vector2 pos;
    Vector2 size;
};

struct Field {
    Rectangle camera;
    FieldEntity entityList[1024];
    FieldPlayer player;
};

#endif
