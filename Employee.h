#pragma once
#include <string>

class Employee {
protected:
    std::string name;
    int id;
    std::string title;

public:
    Employee(const std::string& name, int id, const std::string& title);
    virtual ~Employee(); // Virtual destructor is needed for polymorphism

    virtual void displayInfo() const; // Virtual function for polymorphic behavior
    virtual double calculatePay() const = 0; // Pure virtual function, makes Employee abstract
};

