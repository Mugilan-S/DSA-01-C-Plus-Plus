#include <iostream>
#include <string>

class Student {
public:
    Student(std::string name, int age);
    ~Student();

    void displayInfo();

private:
    std::string name;
    int age;
};

Student::Student(std::string name, int age) : name(name), age(age) {
    std::cout << "Student created: " << name << " (Age: " << age << ")" << std::endl;
}

Student::~Student() {
    std::cout << "Student destroyed: " << name << std::endl;
}

void Student::displayInfo() {
    std::cout << "Name: " << name << std::endl;
    std::cout << "Age: " << age << std::endl;
}

int main() {
    Student student1("John Doe", 20);
    student1.displayInfo();
    return 0;
}

