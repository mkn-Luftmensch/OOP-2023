#ifndef UTILS_H
#define UTILS_H
#include <tuple>
using namespace std;

class Utils {
    public:
        static tuple<int, int> generateRandomPos(int gridWidth, int gridHeight);
        static double calculateDistance(tuple<int, int> pos1, tuple<int, int> pos2);
};

#endif