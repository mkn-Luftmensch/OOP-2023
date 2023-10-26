#ifndef GAME_H
#define GAME_H
#include "Character.h"
#include "Trap.h"
#include "Utils.h"
#include <vector>
#include <iostream>

class Game {
    private:
        vector<Cell*> grid;
        int width;
    public:
        vector<Cell*>& getGrid() {
            return grid;
        }
        void initGame(int numCharacters, int numTraps, int gridWidth, int gridHeight) {
            width = gridWidth;
            for(int i=0; i<numCharacters; i++) {
                tuple<int, int> randpos = Utils::generateRandomPos(gridWidth, gridHeight);
                grid.push_back(new Character(get<0>(randpos), get<1>(randpos)));
            }
            for(int i=0; i<numTraps; i++) {
                tuple<int, int> randpos = Utils::generateRandomPos(gridWidth, gridHeight);
                grid.push_back(new Trap(get<0>(randpos), get<1>(randpos)));
            }
        }
        
        void gameLoop(int maxIterations, double trapActivationDistance) {
            for(int i=0; i<maxIterations; i++) {
                for(Cell *character : grid) {
                    if(character->getType() == 'C') {
                        static_cast<Character*>(character)->move(1, 0);
                        if(get<0>(character->getPos()) > width) {
                            cout << "Character has won the game!";
                            return;
                        }
                        for(Cell *trap : grid) {
                            if(trap->getType() == 'T') {
                                double dist = Utils::calculateDistance(trap->getPos(), character->getPos());
                                if(static_cast<Trap*>(trap) != nullptr){
                                    if (dist <= trapActivationDistance && static_cast<Trap*>(trap)->isActive()==true) {
                                        static_cast<Trap*>(trap)->apply(*character);
                                    }
                                }
                            }
                        }
                    }
                }
            }
            cout << "Maximum number of iterations reached. Game over." << endl;
        }
};

#endif