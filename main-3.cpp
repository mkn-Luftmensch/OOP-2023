#include "Game.h"

int main() {
    Game AvoidTheTrap;
    AvoidTheTrap.initGame(3, 1, 5, 5);
    AvoidTheTrap.gameLoop(5, 1.0);
    return 0;
}