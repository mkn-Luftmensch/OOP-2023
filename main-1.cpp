#include "GameEntity.h"
#include "Utils.h"
#include <iostream>
using namespace std;
int main() {
    GameEntity Steve(4, 2, 'c');
    tuple<int, int> pos = Steve.getPos();
    cout << get<0>(pos) << ", " << get<1>(pos) << endl << Steve.getType() << endl;

    tuple<int, int> ranpos = Utils::generateRandomPos(5, 5);
    cout << get<0>(ranpos) << ", " << get<1>(ranpos) << endl << Utils::calculateDistance(pos, ranpos);

    return 0;
}