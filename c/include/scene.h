#ifndef SCENE_H
#define SCENE_H

#include "includes.h"
#include "types.h"

void sceneTitleReady(GameVar*);
void sceneTitleUpdate(GameVar*);
void sceneTitleRender(GameVar*);
void sceneTitleMouseUp(GameVar*, Vector2, int);
void sceneTitleKeyDown(GameVar*);

extern void (*sceneReadys[])(GameVar*);
extern void (*sceneUpdates[])(GameVar*);
extern void (*sceneRenders[])(GameVar*);
extern void (*sceneMouseUps[])(GameVar*, Vector2, int);
extern void (*sceneKeyDowns[])(GameVar*);

#endif
