#include "Effect.h"
#include "Utils.h"
#include <iostream>
int main() {
    GameEntity entity1(1, 2, 'S');
    GameEntity entity2(9, 5, 'A');
    cout << Utils::calculateDistance(entity1.getPos(), entity2.getPos());
}