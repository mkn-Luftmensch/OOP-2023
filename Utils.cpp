#include "Utils.h"
#include <random>

tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    return make_tuple((rand() % gridWidth+1), (rand() % gridHeight+1));
}

double Utils::calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2){
    return sqrt(pow((get<0>(pos1)-get<0>(pos2)), 2) + pow((get<1>(pos1)-get<1>(pos2)), 2));
}