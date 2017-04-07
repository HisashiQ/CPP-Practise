#include <iostream>
#include "Game.h"
#include "Player.h"

int playerGuess(Player *, int &);

int main() {
    bool playAgain;
    char retry = 'n';
    do {
        Game g;
        int realValue = g.getValue();
        std::cout << realValue << std::endl;
        Player player;
        playerGuess(&player, realValue);
        player.getGuessCount();
        if (player.getCurrentGuess() != 1) {
            std::cout << "Type 'y' to play again or 'n' to quit" << std::endl;
            std::cin >> retry;
            if (retry == 'y') {
                playAgain = true;
            } else {
                playAgain = false;
            }
        } else {
            playAgain = false;
        }
    } while (playAgain);
    return 0;
}

int playerGuess(Player *player, int &realValue) {
    bool playStop;
    do {
        std::cout << "Guess a number or type 1 to quit" << std::endl;
        player -> setCurrentGuess();
        playStop = player -> printGuessFeedback(realValue);
    } while (!playStop);
}