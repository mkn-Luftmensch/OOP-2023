#ifndef TRAP_H
#define TRAP_H
#include "Effect.h"
#include "Cell.h"
class Trap : public Cell, Effect {
    public:
        Trap(int x, int y) : Cell(x, y, 'T'){}
        bool isActive() {
            if(get<0>(position) == -1 && get<1>(position) == -1) return false;
            else return true;
        }
        void apply(Cell& cell) override {
            cell.setType('T');
            setPos(-1, -1);
        }
};
#endif 