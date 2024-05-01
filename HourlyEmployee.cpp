#include "HourlyEmployee.h"
#include <iostream>

HourlyEmployee::HourlyEmployee(const std::string& name, int id, const std::string& jobTitle, double hourlyRate, double hoursWorked)
    : Employee(name, id, jobTitle), hourlyRate(hourlyRate), hoursWorked(hoursWorked) {}

double HourlyEmployee::calculatePay() const {
    return hourlyRate * hoursWorked;
}

void HourlyEmployee::displayInfo() const {
    Employee::displayInfo();
    std::cout << "Hourly Rate: $" << hourlyRate << std::endl;
    std::cout << "Hours Worked: " << hoursWorked << std::endl;
}
