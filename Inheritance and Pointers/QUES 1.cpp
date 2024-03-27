#include <iostream>
#include <cmath>

class Shape {
protected:
    double height;
    double width;

public:
    Shape(double h, double w) : height(h), width(w) {}

    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

class Rectangle : public Shape {
public:
    Rectangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return height * width;
    }

    double perimeter() const override {
        return 2 * (height + width);
    }
};

class Triangle : public Shape {
public:
    Triangle(double h, double w) : Shape(h, w) {}

    double area() const override {
        return 0.5 * height * width;
    }

    double perimeter() const override {
        // Assuming it's a right triangle
        double hypotenuse = std::sqrt(height * height + width * width);
        return height + width + hypotenuse;
    }
};

int main() {
    Rectangle rect(5, 10);
    Triangle tri(4, 7);

    std::cout << "Rectangle Area: " << rect.area() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.perimeter() << std::endl;

    std::cout << "Triangle Area: " << tri.area() << std::endl;
    std::cout << "Triangle Perimeter: " << tri.perimeter() << std::endl;

    return 0;
}

