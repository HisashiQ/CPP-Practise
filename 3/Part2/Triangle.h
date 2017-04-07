//
// Created by Quinn Koike on 01/02/2017.
//

#ifndef PART2_TRIANGLE_H
#define PART2_TRIANGLE_H


#include "Shape.h"

class Triangle : public Shape {
public:
    Triangle(double &, double &);
    const double calculateArea() const override;
    void print() const override;
    const double getHeight() const;
    const double getBase() const;

private:
    double base;
    double height;

};


#endif //PART2_TRIANGLE_H
