//
// Created by Quinn Koike on 01/02/2017.
//

#include <math.h>
#include <iostream>
#include "Oval.h"

Oval::Oval(double &minRadius, double &secondRadius) : Circle::Circle(minRadius), secondRadius(secondRadius){
}

const double Oval::calculateArea() const {
    return getRadius() * getSecondRadius() * M_PI;
}

const double Oval::getSecondRadius() const {
    return secondRadius;
}


