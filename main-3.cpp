#include "Game.h"

int main() {
    Game game;
    game.initGame(3, 3, 10, 10);
    game.gameLoop(10, 2.0);
    cout << "Game Over";
    return 0;
}