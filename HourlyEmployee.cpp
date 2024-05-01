#include "HourlyEmployee.h"
#include <iostream>

HourlyEmployee::HourlyEmployee(const std::string& name, int id, const std::string& title, double hourlyRate, double hoursWorked)
    : Employee(name, id, title), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

double HourlyEmployee::calculatePay() const {
    // Assuming hourly pay, calculate pay based on hours worked
    return hourlyRate * hoursWorked;
}

void HourlyEmployee::displayInfo() const {
    Employee::displayInfo(); // Call base class displayInfo() to print name, ID, and title
    std::cout << "Hourly Rate: $" << hourlyRate << std::endl;
    std::cout << "Hours Worked: " << hoursWorked << std::endl;
}
