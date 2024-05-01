#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, int id, const std::string& jobTitle)
    : name(name), id(id), jobTitle(jobTitle) {}

Employee::~Employee() {}

void Employee::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Job Title: " << jobTitle << std::endl;
}
