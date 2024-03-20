#ifndef SQUARE_H
#define SQUARE_H

#include "base.h"
#include "iostream"
#include "string"

class Square2d : public BaseShape2D {
    private:
        double side;

        std::string name() const override {
            return "Square";
        }

        std::string get_extra_info() const override {
            return "Side : " + std::to_string(side);
        }
    
    public:
        Square2d(Color c, double s) : BaseShape2D(c), side(s) {}

        double area() const override {
            return side * side;
        }

        double perimeter() const override {
            return 4 * side;
        }

        void operator*(double rhs) override {
            side *= rhs;
        }
};

#endif // SQUARE_H