//
// Created by pavel on 01.06.19.
//

#ifndef TASK1_PREY_H
#define TASK1_PREY_H

#include "Object.h"
#include "Cell.h"
#include "Ocean.h"
#include "common.h"

class Cell;
class Ocean;
class Prey : public Object
{
public:
    Prey(Cell* cell);
    bool live() override;
    char getChar() override;
    void move() override;
    void reproduce() override;
};
#endif //TASK1_PREY_H
