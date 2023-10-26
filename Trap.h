#ifndef TRAP_H
#define TRAP_H
#include "Effect.h"
#include "Cell.h"
class Trap : public Cell, Effect {
    public:
        Trap(int x, int y) : Cell(x, y, 'T'){}
        bool isActive() {
            if(type == 'T') return true;
            else return false;
        }
        void apply(Cell& cell) override {
            cell.setType('T');
            type = 'X';
        }
};
#endif 