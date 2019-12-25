#include <iostream>
#include "../include/Core/Engine.h"

int main() {
    std::cout << "DEBUG" << std::endl;

    VNEngine::Game game;

    // game loop
    // this shit have to be in Game folder))) but its debug mfcka
    while(game.isRunning()) {
        game.update();
        game.draw();
    }
    return 0;
}
