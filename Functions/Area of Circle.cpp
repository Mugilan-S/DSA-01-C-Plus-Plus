#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a circle
double calculateCircleArea(double radius) {
    return M_PI * pow(radius, 2); // M_PI is the constant for pi
}

int main() {
    double radius, area;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    area = calculateCircleArea(radius);

    cout << "Area of the circle with radius " << radius << " is: " << area << endl;

    return 0;
}

