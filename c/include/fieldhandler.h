#ifndef FIELDHANDLER_H
#define FIELDHANDLER_H

#include "includes.h"
#include "types.h"

void playerInit(GameVar*, Field*);
void playerUpdate(GameVar*, Field*);
void playerRender(GameVar*, Field*);

void fieldInit(GameVar*, Field*);
void fieldUpdate(GameVar*, Field*);
void fieldRender(GameVar*, Field*);

#endif
