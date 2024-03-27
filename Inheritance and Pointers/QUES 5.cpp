#include <iostream>
#include <string>

class Person {
protected:
    std::string name;
    int age;
    char gender;

public:
    Person(const std::string& name, int age, char gender)
        : name(name), age(age), gender(gender) {}

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getAge() const {
        return age;
    }

    char getGender() const {
        return gender;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setAge(int newAge) {
        age = newAge;
    }

    void setGender(char newGender) {
        gender = newGender;
    }
};

class Student : public Person {
private:
    int rollNumber;
    std::string className;

public:
    Student(const std::string& name, int age, char gender,
            int rollNumber, const std::string& className)
        : Person(name, age, gender), rollNumber(rollNumber), className(className) {}

    // Getter functions for Student class
    int getRollNumber() const {
        return rollNumber;
    }

    std::string getClassName() const {
        return className;
    }

    // Setter functions for Student class
    void setRollNumber(int newRollNumber) {
        rollNumber = newRollNumber;
    }

    void setClassName(const std::string& newClassName) {
        className = newClassName;
    }
};

class Teacher : public Person {
private:
    std::string subject;
    double salary;

public:
    Teacher(const std::string& name, int age, char gender,
            const std::string& subject, double salary)
        : Person(name, age, gender), subject(subject), salary(salary) {}

    // Getter functions for Teacher class
    std::string getSubject() const {
        return subject;
    }

    double getSalary() const {
        return salary;
    }

    // Setter functions for Teacher class
    void setSubject(const std::string& newSubject) {
        subject = newSubject;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }
};

int main() {
    Student student("Alice", 18, 'F', 101, "Class 10");
    Teacher teacher("Mr. Smith", 35, 'M', "Mathematics", 50000.0);

    // Using getter functions to retrieve data
    std::cout << "Student Name: " << student.getName() << std::endl;
    std::cout << "Student Age: " << student.getAge() << std::endl;
    std::cout << "Student Gender: " << student.getGender() << std::endl;
    std::cout << "Student Roll Number: " << student.getRollNumber() << std::endl;
    std::cout << "Student Class: " << student.getClassName() << std::endl;

    std::cout << "\nTeacher Name: " << teacher.getName() << std::endl;
    std::cout << "Teacher Age: " << teacher.getAge() << std::endl;
    std::cout << "Teacher Gender: " << teacher.getGender() << std::endl;
    std::cout << "Teacher Subject: " << teacher.getSubject() << std::endl;
    std::cout << "Teacher Salary: $" << teacher.getSalary() << std::endl;

    return 0;
}

