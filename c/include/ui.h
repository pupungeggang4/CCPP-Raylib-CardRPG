#ifndef UI_H
#define UI_H

#include "includes.h"
#include "types.h"

struct UITitle {
    Vector2 textTitle;
    Rectangle buttonStart;
    Vector2 textStart;
    Rectangle buttonQuit;
    Vector2 textQuit;
};

struct UIFile {
    Vector2 textTitle;
    Rectangle buttonFile[3];
    Rectangle buttonDelete;
};

struct UIField {
    Rectangle buttonMenu;
};

struct UIInventory {
    Rectangle rect;
    Rectangle buttonClose;
};

struct UIMap {

};

struct UIBattle {

};

struct UIMenuField {
    Rectangle rect;
    Vector2 textPaused;
    Rectangle buttonResume;
    Vector2 textResume;
    Rectangle buttonExit;
    Vector2 textExit;
    Rectangle buttonQuit;
    Vector2 textQuit;
};

struct UIMenuBattle {

};

extern UITitle uiTitle;
extern UIField uiField;
extern UIFile uiFile;
extern UIBattle uiBattle;
extern UIInventory uiInventory;
extern UIMap uiMap;
extern UIBattle uiBattle;
extern UIMenuField uiMenuField;
extern UIMenuBattle uiMenuBattle;

#endif
