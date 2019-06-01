//
// Created by pavel on 01.06.19.
//

#ifndef TASK1_CELL_H
#define TASK1_CELL_H

#include "common.h"
#include "Object.h"
#include "Ocean.h"

class Ocean;
class Cell
{
    friend Ocean;
public:
    explicit Cell(Pair p = { 0, 0 }, Ocean* oc = nullptr) :
            crd(p),
            object(nullptr),
            ocean(oc) {}
    void init(Pair p, Ocean* oc);
    Object* getObject() const;
    Ocean* getOcean() const;
    void setObject(Object*);
    void killMe();
    Cell* findEmptyNeighbour();
    Cell* findPreyNeighbour();

private:
    Pair crd;
    Object *object;
    Ocean *ocean;

};

#endif //TASK1_CELL_H
