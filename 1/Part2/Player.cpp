//
// Created by Quinn Koike on 22/01/2017.
//

#include "Player.h"
#include <iostream>

Player::Player(int guess): currentGuessValue(guess) {
    guessCount = 0;
}

int Player::getCurrentGuess() const {
    return currentGuessValue;
}

void Player::setCurrentGuess() {
    bool finished = false;
    int guess;
    do {
        std::cin.clear();
        std::cin >> guess;
        if (guess >= 1000 && guess <= 9999) {
            currentGuessValue = guess;
            incrementGuessCount();
            finished = true;
        } else if (guess == 1){
            finished = true;
            currentGuessValue = guess;
        } else {
            std::cout << "Your guess must be between 1000 and 9999, please try again." << std::endl;
        }
    } while (!finished);
}

void Player::incrementGuessCount() {
    guessCount += 1;
}

size_t Player::getGuessCount() const {
    return guessCount;
}

bool Player::printGuessFeedback(int &realValue) {
    if (getCurrentGuess() == realValue){
        std::cout << "Correct! You guessed " << getGuessCount() << " times" << std::endl;
        return true;
    } else if (getCurrentGuess() == 1){
        std::cout << "Goodbye!" << std::endl;
        return true;
    } else if (getCurrentGuess() < realValue){
        std::cout << "Too low, try again" << std::endl;
        return false;
    } else if (getCurrentGuess() > realValue){
        std::cout << "Too high, try again" << std::endl;
        return false;
    } else {
        throw std::invalid_argument("Something went wrong (Error from: Player.cpp - Line 45)");
    }
}
