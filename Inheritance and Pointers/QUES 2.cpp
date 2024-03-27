#include <iostream>
#include <string>

class Vehicle {
protected:
    std::string make;
    std::string model;
    int year;

public:
    Vehicle(const std::string& make, const std::string& model, int year)
        : make(make), model(model), year(year) {}

    // Getter functions
    std::string getMake() const {
        return make;
    }

    std::string getModel() const {
        return model;
    }

    int getYear() const {
        return year;
    }

    // Setter functions
    void setMake(const std::string& newMake) {
        make = newMake;
    }

    void setModel(const std::string& newModel) {
        model = newModel;
    }

    void setYear(int newYear) {
        year = newYear;
    }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    std::string fuelType;

public:
    Car(const std::string& make, const std::string& model, int year,
        int seatingCapacity, const std::string& fuelType)
        : Vehicle(make, model, year), seatingCapacity(seatingCapacity), fuelType(fuelType) {}

    // Getter functions for Car class
    int getSeatingCapacity() const {
        return seatingCapacity;
    }

    std::string getFuelType() const {
        return fuelType;
    }

    // Setter functions for Car class
    void setSeatingCapacity(int newCapacity) {
        seatingCapacity = newCapacity;
    }

    void setFuelType(const std::string& newFuelType) {
        fuelType = newFuelType;
    }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;

public:
    Truck(const std::string& make, const std::string& model, int year,
          double payloadCapacity, double towingCapacity)
        : Vehicle(make, model, year), payloadCapacity(payloadCapacity), towingCapacity(towingCapacity) {}

    // Getter functions for Truck class
    double getPayloadCapacity() const {
        return payloadCapacity;
    }

    double getTowingCapacity() const {
        return towingCapacity;
    }

    // Setter functions for Truck class
    void setPayloadCapacity(double newPayloadCapacity) {
        payloadCapacity = newPayloadCapacity;
    }

    void setTowingCapacity(double newTowingCapacity) {
        towingCapacity = newTowingCapacity;
    }
};

int main() {
    Car myCar("Toyota", "Camry", 2022, 5, "Gasoline");
    Truck myTruck("Ford", "F-150", 2023, 2000.0, 10000.0);

    // Using getter functions to retrieve data
    std::cout << "Car Make: " << myCar.getMake() << std::endl;
    std::cout << "Car Model: " << myCar.getModel() << std::endl;
    std::cout << "Car Year: " << myCar.getYear() << std::endl;
    std::cout << "Car Seating Capacity: " << myCar.getSeatingCapacity() << std::endl;
    std::cout << "Car Fuel Type: " << myCar.getFuelType() << std::endl;

    std::cout << "\nTruck Make: " << myTruck.getMake() << std::endl;
    std::cout << "Truck Model: " << myTruck.getModel() << std::endl;
    std::cout << "Truck Year: " << myTruck.getYear() << std::endl;
    std::cout << "Truck Payload Capacity: " << myTruck.getPayloadCapacity() << " lbs" << std::endl;
    std::cout << "Truck Towing Capacity: " << myTruck.getTowingCapacity() << " lbs" << std::endl;

    return 0;
}

