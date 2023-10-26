#include "Game.h"

int main() {
    Game AvoidTheTrap;
    AvoidTheTrap.initGame(10, 7, 17, 17);
    AvoidTheTrap.gameLoop(8, 5.0);
    return 0;
}