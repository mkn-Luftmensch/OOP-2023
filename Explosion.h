#ifndef EXPLOSION_H
#define EXPLOSION_H
#include "GameEntity.h"
#include "Effect.h"

class Explosion : public GameEntity, Effect
{
public:
    Explosion(int x, int y);
    void apply(GameEntity& entity) override;
};

Explosion::Explosion(int x, int y) : GameEntity(x, y, 'E'){}

void Explosion::apply(GameEntity& entity) {
    entity = GameEntity(-1, -1, 'X');
}

#endif