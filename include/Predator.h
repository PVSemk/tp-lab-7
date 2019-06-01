//
// Created by pavel on 01.06.19.
//

#ifndef TASK1_PREDATOR_H
#define TASK1_PREDATOR_H

#include "Object.h"
#include "Cell.h"
#include "Ocean.h"
#include "common.h"

class Predator : public Object
{
public:
    Predator(Cell* cell);
    bool live() override;
    char getChar() override;
    bool eat();
    void move() override;
    void reproduce() override;

private:
    bool fed = false;
};

#endif //TASK1_PREDATOR_H
