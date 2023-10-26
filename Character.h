#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"

class Character : public Cell {
    public:
        Character(int x, int y) : Cell(x, y, 'C'){}
        void move(int dx, int dy) {
            get<0>(position)+=dx;
            get<1>(position)+=dy;
        }
};

#endif