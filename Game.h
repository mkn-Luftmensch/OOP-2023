#ifndef GAME_H
#define GAME_H
#include "GameEntity.h"
#include "Ship.h"
#include "Mine.h"
#include "Explosion.h"
#include "Utils.h"
#include <vector>
#include <iostream>

class Game {
    private:
        vector<GameEntity*> entities;
    public:
        vector<GameEntity*> initGame(int numShips, int numMines, int gridWidth, int gridHeight) {
            for (int i = 0; i < numShips; ++i) {
                tuple<int, int> randpos = Utils::generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Ship(get<0>(randpos), get<1>(randpos)));
            }
            for (int i = 0; i < numMines; ++i) {
                tuple<int, int> randpos = Utils::generateRandomPos(gridWidth, gridHeight);
                entities.push_back(new Mine(get<0>(randpos), get<1>(randpos)));
            }
            return entities;
        }

        void gameLoop(int maxIterations, double mineDistanceThreshold) {
            for (int i=0; i<maxIterations; ++i) {
                for (GameEntity* ship : entities) {
                    if(ship->getType() == 'S') {
                        static_cast<Ship*>(ship)->move(1, 0);
                        for (GameEntity* boom : entities) {
                            if (boom->getType() == 'M') {
                                
                                double dist = Utils::calculateDistance(ship->getPos(), boom->getPos());
                                if (dist <= mineDistanceThreshold) {
                                    Explosion explosion = static_cast<Mine*>(boom)->explode();
                                    explosion.apply(*ship);
                                    cout << ship->getType() << endl;
                                }
                            }
                        }
                    }
                }
            }
        }
};

#endif