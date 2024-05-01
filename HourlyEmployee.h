#pragma once
#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
public:
    HourlyEmployee(const std::string& name, int id, const std::string& jobTitle, double hourlyRate, double hoursWorked);
    double calculatePay() const override;
    void displayInfo() const override;

private:
    double hourlyRate;
    double hoursWorked;
};

#endif // HOURLYEMPLOYEE_H
