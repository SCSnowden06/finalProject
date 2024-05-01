#pragma once
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string>

class Employee {
public:
    Employee(const std::string& name, int id, const std::string& jobTitle);
    virtual ~Employee();
    virtual double calculatePay() const = 0;
    virtual void displayInfo() const;

protected:
    std::string name;
    int id;
    std::string jobTitle;
};

#endif // EMPLOYEE_H
