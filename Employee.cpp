#include "Employee.h"
#include <iostream>

Employee::Employee(const std::string& name, int id, const std::string& title)
    : name(name), id(id), title(title) {}

Employee::~Employee() {} // Definition of the destructor

void Employee::displayInfo() const {
    std::cout << "Name: " << name << std::endl;
    std::cout << "ID: " << id << std::endl;
    std::cout << "Title: " << title << std::endl;
}
