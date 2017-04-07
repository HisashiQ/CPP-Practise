//
// Created by Quinn Koike on 01/02/2017.
//

#include <iostream>
#include "Triangle.h"

Triangle::Triangle(double &height, double &base) : height(height), base(base){
}

const double Triangle::calculateArea() const {
    return (getBase() * getHeight()) / 2;
}

void Triangle::print() const {
    std::cout << calculateArea() << std::endl;
}

const double Triangle::getHeight() const {
    return height;
}

const double Triangle::getBase() const {
    return base;
}
