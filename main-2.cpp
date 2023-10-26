#include "Ship.h"
#include "Explosion.h"
#include "Mine.h"
#include <iostream>
int main() {
    Ship myShip(3, 5);
    Mine mine(4, 6);
    myShip.move(2, 2);
    Explosion explosion = mine.explode();
    explosion.apply(myShip);
    cout << get<0>(myShip.getPos()) << " " << get<1>(myShip.getPos()) << myShip.getType() << endl;
    return 0;
}