#ifndef UI_H
#define UI_H

#include "includes.h"
#include "types.h"

struct UITitle {
    Vector2 textTitle;
};

struct UIField {
    Rectangle buttonMenu;

};

struct UIInventory {

};

struct UIMap {

};

struct UIBattle {

};

struct UIMenuField {

};

struct UIMenuBattle {

};

extern UITitle uiTitle;
extern UIField uiField;
extern UIBattle uiBattle;
extern UIInventory uiInventory;
extern UIMap uiMap;
extern UIBattle uiBattle;
extern UIMenuField uiMenuField;
extern UIMenuBattle uiMenuBattle;

#endif
