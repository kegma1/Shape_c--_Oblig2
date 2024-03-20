#ifndef CIRCLE_H
#define CIRCLE_H

#include "base.h"
#include "iostream"
#include "string"

class Circle2d : public BaseShape2D {
    private:
        double radius;

        std::string name() const override {
            return "Circle";
        }

        std::string get_extra_info() const override {
            return "Radius : " + std::to_string(radius);
        }
    
    public:
        Circle2d(Color c, double r) : BaseShape2D(c), radius(r) {}

        double area() const override {
            return 3.14 * (radius * radius);
        }

        double perimeter() const override {
            return 2 * 3.14 * radius;
        }

        void operator*(double rhs) override {
            radius *= rhs;
        }
};

#endif // CIRCLE_H