//
// Created by Quinn Koike on 01/02/2017.
//

#ifndef PART2_SQUARE_H
#define PART2_SQUARE_H


#include "Shape.h"

class Square : public Shape {
public:
    Square(double &);
    virtual ~Square();
    virtual const double calculateArea() const override;
    void print() const override;
    const double getLength() const;

private:
    double length;
};


#endif //PART2_SQUARE_H
