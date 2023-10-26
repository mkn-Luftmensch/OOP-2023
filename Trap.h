#ifndef TRAP_H
#define TRAP_H
#include "Effect.h"
#include "Cell.h"
class Trap : public Cell, Effect {
    private:
        bool status;
    public:
        Trap(int x, int y) : Cell(x, y, 'T'){
            status = true;
        }
        bool isActive() {
            if(status == true) return true;
            else return false;
        }
        void apply(Cell& cell) override {
            cell.setType('T');
            status = false;
        }
};
#endif 