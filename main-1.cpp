#include "Cell.h"
#include "Effect.h"
#include "Utils.h"
#include <iostream>

int main() {
    Cell cell1(1, 2, 'S');
    Cell cell2(8, 9, 'A');
    cout << Utils::calculateDistance(cell1.getPos(), cell2.getPos());
    return 0;
}