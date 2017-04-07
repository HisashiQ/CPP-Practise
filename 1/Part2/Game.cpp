//
// Created by Quinn Koike on 22/01/2017.
//

#include "Game.h"
Game::Game() {
    generateValue();
}

int Game::getValue() const {
    return value;
}

void Game::generateValue() {
    srand (time(NULL));
    value = rand() % (9999 - 1000 + 1) + 1000;
}
