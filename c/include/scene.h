#ifndef SCENE_H
#define SCENE_H

#include "includes.h"
#include "types.h"

void sceneTitleReady(GameVar*);
void sceneTitleUpdate(GameVar*);
void sceneTitleRender(GameVar*);
void sceneTitleMouseUp(GameVar*, Vector2, int);
void sceneTitleKeyDown(GameVar*);

void sceneFileReady(GameVar*);
void sceneFileUpdate(GameVar*);
void sceneFileRender(GameVar*);
void sceneFileMouseUp(GameVar*, Vector2, int);
void sceneFileKeyDown(GameVar*);

void sceneFieldReady(GameVar*);
void sceneFieldUpdate(GameVar*);
void sceneFieldRender(GameVar*);
void sceneFieldMouseUp(GameVar*, Vector2, int);
void sceneFieldKeyDown(GameVar*);

extern void (*sceneReadys[])(GameVar*);
extern void (*sceneUpdates[])(GameVar*);
extern void (*sceneRenders[])(GameVar*);
extern void (*sceneMouseUps[])(GameVar*, Vector2, int);
extern void (*sceneKeyDowns[])(GameVar*);

#endif
