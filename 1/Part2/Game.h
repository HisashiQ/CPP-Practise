//
// Created by Quinn Koike on 22/01/2017.
//

#ifndef PART2_GAME_H
#define PART2_GAME_H


#include <iostream>

class Game {

public:
    Game();
    int getValue() const;
    void generateValue();

private:
    int value;
};


#endif //PART2_GAME_H
