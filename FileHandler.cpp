#include "FileHandler.h"
#include <fstream>
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"
#include <iostream>

void FileHandler::saveEmployeeData(const std::vector<Employee*>& employees, const std::string& filename) {
    std::ofstream outFile(filename, std::ios::binary);
    if (!outFile) {
        std::cerr << "Error: Unable to open file for writing." << std::endl;
        return;
    }

    for (const auto& emp : employees) {
        if (auto hourlyEmp = dynamic_cast<HourlyEmployee*>(emp)) {
            // Employee is a HourlyEmployee
            outFile.write(reinterpret_cast<const char*>(hourlyEmp), sizeof(HourlyEmployee));
        }
        else if (auto salariedEmp = dynamic_cast<SalariedEmployee*>(emp)) {
            // Employee is a SalariedEmployee
            outFile.write(reinterpret_cast<const char*>(salariedEmp), sizeof(SalariedEmployee));
        }
        else {
            // Unknown type of employee
            std::cerr << "Error: Unknown type of employee." << std::endl;
        }
    }

    outFile.close();
}

std::vector<Employee*> FileHandler::loadEmployeeData(const std::string& filename) {
    std::vector<Employee*> employees;
    std::ifstream inFile(filename, std::ios::binary);
    if (!inFile) {
        std::cerr << "Error: Unable to open file for reading." << std::endl;
        return employees;
    }

    while (inFile.peek() != EOF) {
        // Determine the type of employee and allocate memory accordingly
        Employee* emp = nullptr;
        char type;
        inFile.read(reinterpret_cast<char*>(&type), sizeof(char));
        if (type == 'H') {
            emp = new HourlyEmployee("", 0, "", 0.0, 0.0);
            inFile.read(reinterpret_cast<char*>(emp), sizeof(HourlyEmployee));
        }
        else if (type == 'S') {
            emp = new SalariedEmployee("", 0, "", 0.0);
            inFile.read(reinterpret_cast<char*>(emp), sizeof(SalariedEmployee));
        }
        else {
            // Unknown type of employee
            std::cerr << "Error: Unknown type of employee." << std::endl;
            delete emp; // Delete the allocated memory
            continue;
        }
        employees.push_back(emp);
    }

    inFile.close();
    return employees;
}
