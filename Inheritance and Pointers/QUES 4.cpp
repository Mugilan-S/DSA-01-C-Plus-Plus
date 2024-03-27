#include <iostream>
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    double salary;

public:
    Employee(const std::string& name, int id, double salary)
        : name(name), id(id), salary(salary) {}

    // Getter functions
    std::string getName() const {
        return name;
    }

    int getId() const {
        return id;
    }

    double getSalary() const {
        return salary;
    }

    // Setter functions
    void setName(const std::string& newName) {
        name = newName;
    }

    void setId(int newId) {
        id = newId;
    }

    void setSalary(double newSalary) {
        salary = newSalary;
    }
};

class Manager : public Employee {
private:
    std::string department;
    double bonus;

public:
    Manager(const std::string& name, int id, double salary,
            const std::string& department, double bonus)
        : Employee(name, id, salary), department(department), bonus(bonus) {}

    // Getter functions for Manager class
    std::string getDepartment() const {
        return department;
    }

    double getBonus() const {
        return bonus;
    }

    // Setter functions for Manager class
    void setDepartment(const std::string& newDepartment) {
        department = newDepartment;
    }

    void setBonus(double newBonus) {
        bonus = newBonus;
    }
};

class Engineer : public Employee {
private:
    std::string specialty;
    int hours;

public:
    Engineer(const std::string& name, int id, double salary,
             const std::string& specialty, int hours)
        : Employee(name, id, salary), specialty(specialty), hours(hours) {}

    // Getter functions for Engineer class
    std::string getSpecialty() const {
        return specialty;
    }

    int getHours() const {
        return hours;
    }

    // Setter functions for Engineer class
    void setSpecialty(const std::string& newSpecialty) {
        specialty = newSpecialty;
    }

    void setHours(int newHours) {
        hours = newHours;
    }
};

int main() {
    Manager manager("John Doe", 1001, 80000, "Marketing", 5000);
    Engineer engineer("Jane Smith", 2002, 70000, "Software Development", 40);

    // Using getter functions to retrieve data
    std::cout << "Manager Name: " << manager.getName() << std::endl;
    std::cout << "Manager ID: " << manager.getId() << std::endl;
    std::cout << "Manager Salary: $" << manager.getSalary() << std::endl;
    std::cout << "Manager Department: " << manager.getDepartment() << std::endl;
    std::cout << "Manager Bonus: $" << manager.getBonus() << std::endl;

    std::cout << "\nEngineer Name: " << engineer.getName() << std::endl;
    std::cout << "Engineer ID: " << engineer.getId() << std::endl;
    std::cout << "Engineer Salary: $" << engineer.getSalary() << std::endl;
    std::cout << "Engineer Specialty: " << engineer.getSpecialty() << std::endl;
    std::cout << "Engineer Hours: " << engineer.getHours() << " hours per week" << std::endl;

    return 0;
}

