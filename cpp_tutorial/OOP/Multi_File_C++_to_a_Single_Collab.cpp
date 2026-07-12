// %%writefile act0802.cpp

// =============================================
// person.h
// =============================================
# ifndef __PERSON_H__
# define __PERSON_H__

# include <iostream>
# include <string>

class Person {
private:
    std::string name;
    int age;

public:
    Person(const std::string& n, int a);
    std::string getName() const;
    int getAge() const;
    void setName(const std::string& n);
    void setAge(int a);
    void display() const;
};

# endif

// =============================================
// person.cpp
// =============================================
// #include "person.h"     ← Commented out

Person::Person(const std::string& n, int a) : name(n), age(a) {}

std::string Person::getName() const { return name; }
int Person::getAge() const { return age; }

void Person::setName(const std::string& n) { name = n; }
void Person::setAge(int a) { age = a; }

void Person::display() const {
    std::cout << "Person: " << name << " (" << age << " years old)\n";
}

// =============================================
// employee.h
// =============================================
# ifndef __EMPLOYEE_H__
# define __EMPLOYEE_H__

# include <iostream>
# include <string>
// #include "person.h"     ← Commented out

class Employee : public Person {
private:
    std::string employeeID;
    double salary;

public:
    Employee(const std::string& n, int a, const std::string& id, double sal);
    std::string getEmployeeID() const;
    double getSalary() const;
    void setEmployeeID(const std::string& id);
    void setSalary(double sal);
    void display() const;
};

# endif

// =============================================
// employee.cpp
// =============================================
// #include "employee.h"   ← Commented out

Employee::Employee(const std::string& n, int a, const std::string& id, double sal)
    : Person(n, a), employeeID(id), salary(sal) {}

std::string Employee::getEmployeeID() const { return employeeID; }
double Employee::getSalary() const { return salary; }

void Employee::setEmployeeID(const std::string& id) { employeeID = id; }
void Employee::setSalary(double sal) { salary = sal; }

void Employee::display() const {
    Person::display();
    std::cout << "Employee ID: " << employeeID << "\n";
    std::cout << "Salary: $" << salary << "\n\n";
}

// =============================================
// main.cpp
// =============================================
# include <iostream>
// #include "person.h"     ← Commented out
// #include "employee.h"   ← Commented out

int main() {
    std::cout << "=== Multi-File C++ Demo in Colab ===\n\n";

    Person p("Alice Johnson", 34);
    p.display();

    Employee e("Bob Smith", 29, "E-7842", 95000.0);
    e.display();

    e.setName("Robert Smith");
    e.setSalary(102000.0);
    std::cout << "After update:\n";
    e.display();

    return 0;
}