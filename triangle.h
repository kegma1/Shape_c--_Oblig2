#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "base.h"
#include "iostream"
#include "string"
#include "math.h"

class Triangle2d : public BaseShape2D {
    private:
        double base;
        double height;

        std::string name() const override {
            return "Triangle";
        }

        std::string get_extra_info() const override {
            return "Base : " + std::to_string(base) + ", Height: " + std::to_string(height);
        }
    
    public:
        Triangle2d(Color c, double b, double h) : BaseShape2D(c), base(b), height(h) {}

        double area() const override {
            return 0.5 * (base * height);
        }

        double perimeter() const override {
            double hypotenuse = sqrt(base * base + height * height);
            return base + height + hypotenuse;
        }

        void operator*(double rhs) override {
            base *= rhs;
            height *= rhs;
        }
};

#endif // TRIANGLE_H