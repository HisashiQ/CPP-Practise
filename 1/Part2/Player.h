//
// Created by Quinn Koike on 22/01/2017.
//

#ifndef PART2_PLAYER_H
#define PART2_PLAYER_H


#include <cstddef>

class Player {
public:
    Player(int=0);

    int getCurrentGuess() const;
    void setCurrentGuess();

    void incrementGuessCount();
    size_t getGuessCount() const;

    bool printGuessFeedback(int &);

private:
    size_t guessCount;
    int currentGuessValue;
};


#endif //PART2_PLAYER_H
