//
// Created by Quinn Koike on 01/02/2017.
//

#ifndef PART2_OVAL_H
#define PART2_OVAL_H


#include "Circle.h"

class Oval : public Circle {
public:

    Oval(double &, double &);
    const double calculateArea() const override;
    const double getSecondRadius() const;

private:
    double secondRadius = 0;
};


#endif //PART2_OVAL_H
