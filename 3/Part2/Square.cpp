//
// Created by Quinn Koike on 01/02/2017.
//

#include <cmath>
#include <iostream>
#include "Square.h"

Square::Square(double &length) : length(length) {
}

const double Square::calculateArea() const {
    return pow(getLength(), 2.0);
}

void Square::print() const {
    std::cout << calculateArea() << std::endl;
}

const double Square::getLength() const {
    return length;
}

Square::~Square() {

}
