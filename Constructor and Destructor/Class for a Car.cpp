#include <iostream>
#include <string>

class Car {
public:
    Car(std::string make, std::string model);
    ~Car();

    void displayCarInfo();

private:
    std::string make;
    std::string model;
};

Car::Car(std::string make, std::string model) : make(make), model(model) {
    std::cout << "Car created: " << make << " " << model << std::endl;
}

Car::~Car() {
    std::cout << "Car destroyed: " << make << " " << model << std::endl;
}

void Car::displayCarInfo() {
    std::cout << "Make: " << make << std::endl;
    std::cout << "Model: " << model << std::endl;
}

int main() {
    Car myCar("Toyota", "Camry");
    myCar.displayCarInfo();
    return 0;
}

