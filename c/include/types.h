#ifndef TYPES_H
#define TYPES_H

enum Boolean {FALSE, TRUE};
enum Direction {LEFT, RIGHT, UP, DOWN};
enum SceneName {S_TITLE, S_FILE, S_FIELD, S_BATTLE};
enum SceneStateName {ST_NORMAL, ST_INVENTORY, ST_MENU};

typedef struct Asset Asset;
typedef struct UITitle UITitle;
typedef struct UIField UIField;
typedef struct UIFile UIFile;
typedef struct UIInventory UIInventory;
typedef struct UIMap UIMap;
typedef struct UIBattle UIBattle;
typedef struct UIMenuField UIMenuField;
typedef struct UIMenuBattle UIMenuBattle;

typedef struct FieldEntity FieldEntity;
typedef struct FieldPlayer FieldPlayer;
typedef struct Field Field;
typedef struct Battle Battle;

typedef struct SceneTitleVar SceneTitleVar;
typedef struct SceneFileVar SceneFileVar;
typedef struct SceneFieldVar SceneFieldVar;
typedef struct SceneBattleVar SceneBattleVar;
typedef struct GameVar GameVar;

#endif
