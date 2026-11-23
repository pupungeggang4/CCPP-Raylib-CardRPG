#include "scene.h"

void (*sceneReadys[])(GameVar*) = {sceneTitleReady};
void (*sceneUpdates[])(GameVar*) = {sceneTitleUpdate};
void (*sceneRenders[])(GameVar*) = {sceneTitleRender};
void (*sceneMouseUps[])(GameVar*, Vector2, int) = {sceneTitleMouseUp};
void (*sceneKeyDowns[])(GameVar*) = {sceneTitleKeyDown};
