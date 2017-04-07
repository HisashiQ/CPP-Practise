//
// Created by Quinn Koike on 01/02/2017.
//

#include "Rectangle.h"

Rectangle::Rectangle(double &length, double &secondLength) : Square(length), secondLength(secondLength) {
}

const double Rectangle::calculateArea() const {
    return getLength() * getSecondLength();
}

const double Rectangle::getSecondLength() const {
    return secondLength;
}
