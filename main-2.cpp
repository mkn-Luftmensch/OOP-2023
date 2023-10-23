#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"
#include <iostream>
using namespace std;

int main() {
    Ship ship(0, 0);
    Mine mine(2, 2);
    ship.move(2, 2);
    Explosion explosion = mine.explode();
    explosion.apply(ship);
    cout << ship.getType();
    return 0;
}