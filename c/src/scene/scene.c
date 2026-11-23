#include "scene.h"

void (*sceneReadys[])(GameVar*) = {sceneTitleReady, sceneFileReady, sceneFieldReady};
void (*sceneUpdates[])(GameVar*) = {sceneTitleUpdate, sceneFileUpdate, sceneFieldUpdate};
void (*sceneRenders[])(GameVar*) = {sceneTitleRender, sceneFileRender, sceneFieldRender};
void (*sceneMouseUps[])(GameVar*, Vector2, int) = {sceneTitleMouseUp, sceneFileMouseUp, sceneFieldMouseUp};
void (*sceneKeyDowns[])(GameVar*) = {sceneTitleKeyDown, sceneFileKeyDown, sceneFieldKeyDown};
