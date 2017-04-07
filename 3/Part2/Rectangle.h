//
// Created by Quinn Koike on 01/02/2017.
//

#ifndef PART2_RECTANGLE_H
#define PART2_RECTANGLE_H


#include "Square.h"

class Rectangle : public Square{
public:
    Rectangle(double &, double &);
    const double calculateArea() const override;
    const double getSecondLength() const;

private:
    double secondLength;

};


#endif //PART2_RECTANGLE_H
