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
