//
// Created by Quinn Koike on 01/02/2017.
//

#include "Circle.h"
#include <math.h>
#include <iostream>


Circle::Circle(double &radius) : radius(radius)  {
}

const double Circle::calculateArea() const {
    return (pow(getRadius(), 2.0)) * M_PI;
}

void Circle::print() const {
    std::cout << calculateArea() << std::endl;
}

const double Circle::getRadius() const {
    return radius;
}

Circle::~Circle() {
}
