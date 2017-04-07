//
// Created by Quinn Koike on 01/02/2017.
//

#ifndef PART2_CIRCLE_H
#define PART2_CIRCLE_H


#include "Shape.h"

class Circle : public Shape {
public:
    Circle(double &);
    virtual ~Circle();
    virtual const double calculateArea() const override;
    void print() const override;
    const double getRadius() const;


private:
    double radius = 0;
};


#endif //PART2_CIRCLE_H
