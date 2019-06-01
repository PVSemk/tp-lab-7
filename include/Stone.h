//
// Created by pavel on 01.06.19.
//

#ifndef TASK1_STONE_H
#define TASK1_STONE_H

#include "Object.h"
#include "Cell.h"
#include "Ocean.h"
#include "common.h"

class Stone : public Object
{

public:
    Stone(Cell* cell);
    ~Stone() = default;
    bool live() override;
    char getChar() override;
};

#endif //TASK1_STONE_H
