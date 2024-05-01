#include "SalariedEmployee.h"
#include <iostream>

SalariedEmployee::SalariedEmployee(const std::string& name, int id, const std::string& title, double annualSalary)
    : Employee(name, id, title), annualSalary(annualSalary) {}

double SalariedEmployee::calculatePay() const {
    // Assuming monthly salary, divide annual salary by 12
    return annualSalary / 12.0;
}

void SalariedEmployee::displayInfo() const {
    Employee::displayInfo(); // Call base class displayInfo() to print name, ID, and title
    std::cout << "Annual Salary: $" << annualSalary << std::endl;
}
