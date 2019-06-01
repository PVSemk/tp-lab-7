//
// Created by pavel on 01.06.19.
//
#include "Object.h"

Object::Object(Cell *c) : cell(c)
{
}

void Object::setCell(Cell *c)
{
    cell = c;
}

Cell* Object::getCell()
{
    return cell;
}

ObjType Object::getType()
{
    return type;
}

void Object::setLifetime(size_t lt)
{
    lifetime = lt;
}