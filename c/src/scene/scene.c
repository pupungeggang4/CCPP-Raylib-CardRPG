#include "scene.h"

void (*sceneReadys[])(GameVar*) = {sceneTitleReady, sceneFileReady};
void (*sceneUpdates[])(GameVar*) = {sceneTitleUpdate, sceneFileUpdate};
void (*sceneRenders[])(GameVar*) = {sceneTitleRender, sceneFileRender};
void (*sceneMouseUps[])(GameVar*, Vector2, int) = {sceneTitleMouseUp, sceneFileMouseUp};
void (*sceneKeyDowns[])(GameVar*) = {sceneTitleKeyDown, sceneFileKeyDown};
