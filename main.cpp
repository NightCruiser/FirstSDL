#include "Game.hpp"

int main(int argc, const char *argv[]) {
    Game newGame = Game(1280, 1024);

    newGame.Run();
    return 0;
}