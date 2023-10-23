#ifndef MINE_H
#define MINE_H

#include "GameEntity.h"
#include "Explosion.h"

class Mine : public GameEntity{
    public:
        Mine(int x, int y) : GameEntity(x, y, 'M'){}
        Explosion explode() {
            type = 'X';
            Explosion boom(get<0>(position), get<1>(position));
            return boom;
        }
};

#endif