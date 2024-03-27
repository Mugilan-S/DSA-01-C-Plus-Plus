#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& name, int age) : name(name), age(age) {}

    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }
};

int main() {
    
    Person person("John Doe", 30);

    Person* ptrToPerson = &person;

    std::cout << "Name: " << ptrToPerson->getName() << std::endl;
    std::cout << "Age: " << ptrToPerson->getAge() << std::endl;

    return 0;
}

