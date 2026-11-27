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

void sceneInventoryRender(GameVar*);
void sceneInventoryMouseUp(GameVar*, Vector2, int);
void sceneInventoryKeyDown(GameVar*);

void sceneMapRender(GameVar*);
void sceneMapMouseUp(GameVar*, Vector2, int);
void sceneMapKeyDown(GameVar*);

void sceneBattleReady(GameVar*);
void sceneBattleUpdate(GameVar*);
void sceneBattleRender(GameVar*);
void sceneBattleMouseUp(GameVar*, Vector2, int);
void sceneBattleKeyDown(GameVar*);

void sceneMenuFieldReady(GameVar*);
void sceneMenuFieldRender(GameVar*);
void sceneMenuFieldMouseUp(GameVar*, Vector2, int);
void sceneMenuFieldKeyDown(GameVar*);

void sceneMenuBattleReady(GameVar*);
void sceneMenuBattleRender(GameVar*);
void sceneMenuBattleMouseUp(GameVar*, Vector2, int);
void sceneMenuBattleKeyDown(GameVar*);

extern void (*sceneReadys[])(GameVar*);
extern void (*sceneUpdates[])(GameVar*);
extern void (*sceneRenders[])(GameVar*);
extern void (*sceneMouseUps[])(GameVar*, Vector2, int);
extern void (*sceneKeyDowns[])(GameVar*);

#endif
