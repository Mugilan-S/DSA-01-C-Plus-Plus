#include <iostream>
#include <string>

class Animal {
protected:
    std::string name;
    std::string species;
    int age;

public:
    Animal(const std::string& name, const std::string& species, int age)
        : name(name), species(species), age(age) {}

    // Getter functions
    std::string getName() const {
        return name;
    }

    std::string getSpecies() const {
        return species;
    }

    int getAge() const {
        return age;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setSpecies(const std::string& newSpecies) {
        species = newSpecies;
    }

    void setAge(int newAge) {
        age = newAge;
    }
};

class Cat : public Animal {
private:
    std::string color;
    std::string breed;

public:
    Cat(const std::string& name, const std::string& species, int age,
        const std::string& color, const std::string& breed)
        : Animal(name, species, age), color(color), breed(breed) {}

    // Getter functions for Cat class
    std::string getColor() const {
        return color;
    }

    std::string getBreed() const {
        return breed;
    }

    // Setter functions for Cat class
    void setColor(const std::string& newColor) {
        color = newColor;
    }

    void setBreed(const std::string& newBreed) {
        breed = newBreed;
    }
};

class Dog : public Animal {
private:
    double weight;
    std::string breed;

public:
    Dog(const std::string& name, const std::string& species, int age,
        double weight, const std::string& breed)
        : Animal(name, species, age), weight(weight), breed(breed) {}

    // Getter functions for Dog class
    double getWeight() const {
        return weight;
    }

    std::string getBreed() const {
        return breed;
    }

    // Setter functions for Dog class
    void setWeight(double newWeight) {
        weight = newWeight;
    }

    void setBreed(const std::string& newBreed) {
        breed = newBreed;
    }
};

int main() {
    Cat myCat("Whiskers", "Cat", 3, "Tabby", "Domestic Shorthair");
    Dog myDog("Buddy", "Dog", 5, 20.5, "Golden Retriever");

    // Using getter functions to retrieve data
    std::cout << "Cat Name: " << myCat.getName() << std::endl;
    std::cout << "Cat Species: " << myCat.getSpecies() << std::endl;
    std::cout << "Cat Age: " << myCat.getAge() << std::endl;
    std::cout << "Cat Color: " << myCat.getColor() << std::endl;
    std::cout << "Cat Breed: " << myCat.getBreed() << std::endl;

    std::cout << "\nDog Name: " << myDog.getName() << std::endl;
    std::cout << "Dog Species: " << myDog.getSpecies() << std::endl;
    std::cout << "Dog Age: " << myDog.getAge() << std::endl;
    std::cout << "Dog Weight: " << myDog.getWeight() << " lbs" << std::endl;
    std::cout << "Dog Breed: " << myDog.getBreed() << std::endl;

    return 0;
}

