#ifndef ASSET_H
#define ASSET_H

#include "includes.h"
#include "types.h"

struct Asset {
    Texture2D texture[100];
};

extern Asset asset;

void assetLoad(Asset*);
void assetDispose(Asset*);

#endif
