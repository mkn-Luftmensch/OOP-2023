#ifndef GAMEENITY_H
#define GAMEENITY_H
#include <tuple>
using namespace std;

class GameEntity
{
    protected:
        tuple<int, int> position;
        char type;
    public:
        GameEntity(int x, int y, char type) {
            position = make_tuple(x,y);
            this->type = type;
        }

        tuple<int, int> getPos() {
            return position;
        }

        char getType() {
            return type;
        }
};

#endif