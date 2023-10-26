#ifndef EFFECT_H
#define EFFECT_H
#include "Cell.h"
class Effect {
    virtual void apply(Cell& cell) = 0;
};

#endif