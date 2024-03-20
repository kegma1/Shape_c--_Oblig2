#ifndef BASE_H
#define BASE_H

#include "string"
#include "iostream"

enum class Color {
    Red,
    Green,
    Blue
};

class BaseShape2D {
protected:
    Color color;

    virtual std::string name() const = 0;

    std::string get_color_as_string() const {
        switch (color)
        {
            case Color::Red:
                return "Red";
                break;
            case Color::Green:
                return "Green";
                break;
            case Color::Blue:
                return "Blue";
                break;
            default:
                return "No color given";
                break;
        }
    }

    virtual std::string get_extra_info() const = 0;

public:
    BaseShape2D(Color c) : color(c) {}
    virtual ~BaseShape2D() {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
    virtual void operator*(double rhs) = 0;

    virtual void print() const {
        std::string str = "";
        str += name() + " { ";
        str += get_extra_info();
        str += ", Area: " + std::to_string(area());
        str += ", Perimeter: " + std::to_string(perimeter());
        str += ", Color: " + get_color_as_string();
        str += " }";

        std::cout << str << std::endl;
    }
};

#endif // BASE_H
