#pragma once
#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
public:
    SalariedEmployee(const std::string& name, int id, const std::string& jobTitle, double annualSalary);
    double calculatePay() const override;
    void displayInfo() const override;

private:
    double annualSalary;
};

#endif // SALARIEDEMPLOYEE_H
    