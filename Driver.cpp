#include <iostream>
#include "FileHandler.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

#include <iostream>
#include "FileHandler.h"
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

int main() {
    std::cout << "Program start." << std::endl;

    // Create some employee objects
    HourlyEmployee hourlyEmp1("John Doe", 101, "Hourly Worker", 15.0, 40.0);
    SalariedEmployee salariedEmp1("Jane Smith", 102, "Manager", 50000.0);

    std::cout << "Employees created." << std::endl;

    // Save employee data to a binary file
    std::vector<Employee*> employees = { &hourlyEmp1, &salariedEmp1 };
    FileHandler::saveEmployeeData(employees, "employees.bin");

    std::cout << "Employee data saved." << std::endl;

    // Load employee data from the binary file
    std::vector<Employee*> loadedEmployees = FileHandler::loadEmployeeData("employees.bin");

    std::cout << "Employee data loaded." << std::endl;

    // Display information for each loaded employee
    for (const auto& emp : loadedEmployees) {
        emp->displayInfo();
        std::cout << "Monthly Pay: $" << emp->calculatePay() << std::endl;
        std::cout << std::endl;
    }

    std::cout << "Employee data displayed." << std::endl;

    // Cleanup dynamically allocated memory
    for (auto emp : loadedEmployees) {
        delete emp;
    }

    std::cout << "Memory cleanup complete." << std::endl;

    std::cout << "Program end." << std::endl;

    return 0;
}

