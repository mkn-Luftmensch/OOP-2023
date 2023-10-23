#ifndef GAMEENTITY_H
#define GAMEENTITY_H
#include <tuple>
using namespace std;

class GameEntity {
    private:
        tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type);
        tuple<int, int> getPos();
        char getType();
};

#endif