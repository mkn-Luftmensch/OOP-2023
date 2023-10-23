#ifndef GAME_H
#define GAME_H
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Utils.h"
#include <vector>


class Game {
    private:
        vector<GameEntity*> entities;
    public:
        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
            for(int i=0; i<numShips; i++){
                tuple<int, int> randpos = Utils::generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Ship(get<0>(randpos), get<1>(randpos)));
            }
            for(int i=0; i<numMines; i++){
                tuple<int, int> randpos = Utils::generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Mine(get<0>(randpos), get<1>(randpos)));
            }
            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) {
            for (int iteration = 1; iteration <= maxIterations; ++iteration) {
            // Move all Ship objects
                for (GameEntity* entity : entities) {
                    if(entity->getType() == 'S')
                        static_cast<Ship*>(entity)->move(1, 0);
                }
                for (GameEntity* shipEntity : entities) {
                    if (shipEntity->getType() == 'S') {
                        for (GameEntity* mineEntity : entities) {
                            if (mineEntity->getType() == 'M') {
                                double distance = Utils::calculateDistance(shipEntity->getPos(), mineEntity->getPos());
                                if (distance <= mineDistanceThreshold) {
                                    Explosion mineExplosion = static_cast<Mine*>(mineEntity)->explode();
                                    mineExplosion.apply(*shipEntity);
                                }
                            }
                        }
                    }
                }
            }
        }
        vector<GameEntity*> get_entities() {
            return entities;
        }
        
        void set_entities(vector<GameEntity*> new_entities){
            entities = new_entities;
        }
};

#endif 