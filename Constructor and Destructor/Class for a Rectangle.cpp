#include <iostream>

class Rectangle {
public:
    Rectangle(double length, double width);
    ~Rectangle();

    double calculateArea();
    double calculatePerimeter();

    void displayInfo();

private:
    double length;
    double width;
};

Rectangle::Rectangle(double length, double width) : length(length), width(width) {
    std::cout << "Rectangle created with length " << length << " and width " << width << std::endl;
}

Rectangle::~Rectangle() {
    std::cout << "Rectangle destroyed." << std::endl;
}

double Rectangle::calculateArea() {
    return length * width;
}

double Rectangle::calculatePerimeter() {
    return 2 * (length + width);
}

void Rectangle::displayInfo() {
    std::cout << "Length: " << length << std::endl;
    std::cout << "Width: " << width << std::endl;
    std::cout << "Area: " << calculateArea() << std::endl;
    std::cout << "Perimeter: " << calculatePerimeter() << std::endl;
}

int main() {
    Rectangle myRectangle(5.0, 3.0);
    myRectangle.displayInfo();
    return 0;
}

