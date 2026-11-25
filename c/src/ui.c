#include "ui.h"

UITitle uiTitle = {
    {20, 20}, // textTitle
    {160, 160, 480, 80}, // buttonStart
    {180, 180}, // textStart
    {160, 240, 480, 80}, // buttonQuit
    {180, 260}, // textQuit
};

UIFile uiFile = {
    {20, 20}, // textTitle
    {{40, 80, 240, 400}, {280, 80, 240, 400}, {520, 80, 240, 400}}, // buttonFile
    {680, 500, 80, 80}, // buttonDelete
};

UIField uiField = {
    {740, 20, 40, 40}, // buttonMenu
    {740, 540, 40, 40}, // buttonInventory
    {740, 480, 40, 40}, // buttonInteract
    {680, 540, 40, 40}, // buttonMap
    {20, 480, 40, 40}, // buttonLeft
    {140, 480, 40, 40}, // buttonRight
    {80, 420, 40, 40}, // buttonUp
    {80, 540, 40, 40}, // buttonDown
};

UIMenuField uiMenuField = {
    {160, 140, 480, 320}, // rect
    {180, 160}, // textPaused
    {160, 220, 480, 80}, // buttonResume
    {180, 240}, // textResume
    {160, 300, 480, 80}, // buttonExit
    {180, 320}, // textExit
    {160, 380, 480, 80}, // buttonQuit
    {180, 400}, // textQuit
};
