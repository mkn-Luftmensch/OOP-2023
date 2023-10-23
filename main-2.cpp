#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"

int main() {
    Ship ship(0, 0);
    Mine mine(2, 2);
    ship.move(2, 2);
    Explosion explosion = mine.explode();
    explosion.apply(ship);
    return 0;
}