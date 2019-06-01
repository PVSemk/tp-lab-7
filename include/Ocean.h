//
// Created by pavel on 01.06.19.
//

#ifndef TASK1_OCEAN_H
#define TASK1_OCEAN_H

#include "common.h"
#include "Cell.h"
#include "Predator.h"
#include "Stone.h"
#include "Prey.h"
#include <list>

class Ocean
{
    friend Cell;
public:
    Ocean();
    ~Ocean();
    void print() const;
    void addObjects(ObjType type, unsigned int amount);
    void addStuff(Object* obj);
    void deleteObject(Object* obj);
    void run();
    Cell* findEmpty(Pair crd);
    Cell* findPrey(Pair crd);
private:
    Cell** cells;
    std::list<Object*> stuff;
};

#endif //TASK1_OCEAN_H
