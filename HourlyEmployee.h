#pragma once
#include "Employee.h"

class HourlyEmployee : public Employee {
private:
    double hourlyRate;
    double hoursWorked;

public:
    HourlyEmployee(const std::string& name, int id, const std::string& title, double hourlyRate, double hoursWorked);

    virtual double calculatePay() const override;
    virtual void displayInfo() const override;
};
