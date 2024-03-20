#include "iostream"
#include "base.h"
#include "square.h"
#include "circle.h"
#include "triangle.h"

int main() {
    Square2d square(Color::Blue, 10);
    Circle2d circle(Color::Green, 10);
    Triangle2d triangle(Color::Red, 5, 10);

    std::cout << "Shapes at first." << std::endl;
    square.print();
    circle.print();
    triangle.print();

    square * 0.5;
    circle * 0.5;
    triangle * 0.5;

    std::cout << std::endl << "Shapes after halved." << std::endl;
    square.print();
    circle.print();
    triangle.print();

    return 0;
}