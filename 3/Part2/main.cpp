#include <iostream>
#include <geos/platform.h>
#include "Shape.h"
#include "Oval.h"
#include "Square.h"
#include "Rectangle.h"
#include "Triangle.h"

const double checkInput();

int main() {
    bool cont = false;
    size_t shapeChoice = 0;
    Shape *shapePtr;
    std::cout << "Area Calculator" << std::endl;
    std::cout << "   | What type of shape are you looking to find the area for?" << std::endl;
    std::cout << "   | Circle = 1" << std::endl;
    std::cout << "   | Oval = 2" << std::endl;
    std::cout << "   | Square = 3" << std::endl;
    std::cout << "   | Rectangle = 4" << std::endl;
    std::cout << "   | Triangle = 5" << std::endl;

    do {
        std::cin >> shapeChoice;
        if (shapeChoice == 1){
            double radius;
            std::cin.clear();
            std::cout << "What is the radius of the circle?" << std::endl;
            radius = checkInput();
            Circle circle(radius);
            shapePtr = &circle;
            cont = true;
        } else if (shapeChoice == 2){
            double minRadius;
            double maxRadius;
            std::cin.clear();
            std::cout << "What is the minimum radius of the oval?" << std::endl;
            minRadius = checkInput();
            std::cin.clear();
            std::cout << "What is the maximum radius of the oval?" << std::endl;
            maxRadius = checkInput();
            Oval oval(minRadius, maxRadius);
            shapePtr = &oval;
            cont = true;
        } else if (shapeChoice == 3){
            double length;
            std::cin.clear();
            std::cout << "What is the length of the square?" << std::endl;
            length = checkInput();
            Square square(length);
            shapePtr = &square;
            cont = true;
        } else if( shapeChoice == 4){
            double minLength;
            double maxLength;
            std::cin.clear();
            std::cout << "What is the length of the longest side of the rectangle?" << std::endl;
            minLength = checkInput();
            std::cin.clear();
            std::cout << "What is the length of the shortest side of the rectangle?" << std::endl;
            maxLength = checkInput();
            Rectangle rectangle(minLength, maxLength);
            shapePtr = &rectangle;
            cont = true;
        } else if (shapeChoice == 5){
            double base;
            double height;
            std::cin.clear();
            std::cout << "What is the length of the base of the triangle?" << std::endl;
            base = checkInput();
            std::cin.clear();
            std::cout << "What is the height of the triangle?" << std::endl;
            height = checkInput();
            Triangle triangle(height, base);
            shapePtr = &triangle;
            cont = true;
        } else {
            std::cout << "That is not an option. Please try again" << std::endl;
            std::cin.clear();
        }
    } while (!cont);

std::cout << shapePtr -> calculateArea() << std::endl;
    return 0;
}

const double checkInput(){
    double value;
    bool cont = false;
    std::cin >> value;
    do {
        if (value > 0 && value < DoubleMax) {
            cont = true;
            std::cin.clear();
        } else {
            std::cout << "Please enter a valid value (greater than 0)" << std::endl;
            std::cin.clear();
            std::cin.ignore(100, '\n');
        }
    } while (!cont);
    return value;
};