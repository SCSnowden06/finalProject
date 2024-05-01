#pragma once
#include "Employee.h"

class SalariedEmployee : public Employee {
private:
    double annualSalary;

public:
    SalariedEmployee(const std::string& name, int id, const std::string& title, double annualSalary);

    virtual double calculatePay() const override;
    virtual void displayInfo() const override;
};
