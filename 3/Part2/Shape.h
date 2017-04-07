//
// Created by Quinn Koike on 01/02/2017.
//

#ifndef PART2_SHAPE_H
#define PART2_SHAPE_H


class Shape {
public:
    virtual const double calculateArea() const =0;
    virtual void print() const =0;
    virtual ~Shape() {
    }
};


#endif //PART2_SHAPE_H