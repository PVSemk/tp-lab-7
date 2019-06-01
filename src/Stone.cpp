//
// Created by pavel on 01.06.19.
//
#include "Stone.h"
#include "Cell.h"
#include "Object.h"

Stone::Stone(Cell *cell) : Object(cell)
{
    lifetime = LT_Stone;
    type = ObjType::STONE;
};

char Stone::getChar()
{
    return STONE_N;
}

bool Stone::live()
{
    if (!lifetime--)
        return false;
    return true;
}
