#include <iostream>
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

int main() {
    std::cout << "Program start." << std::endl;

    // Create some employee objects
    HourlyEmployee hourlyEmp1("John Doe", 101, "Hourly Worker", 15.0, 40.0);
    SalariedEmployee salariedEmp1("Jane Smith", 102, "Manager", 50000.0);

    std::cout << "Employees created." << std::endl;

    // Display information for each employee
    std::cout << "Hourly Employee Information:" << std::endl;
    hourlyEmp1.displayInfo();
    std::cout << "Hourly Pay: $" << hourlyEmp1.calculatePay() << std::endl;

    std::cout << std::endl;

    std::cout << "Salaried Employee Information:" << std::endl;
    salariedEmp1.displayInfo();
    std::cout << "Monthly Pay: $" << salariedEmp1.calculatePay() << std::endl;

    std::cout << "Employee data displayed." << std::endl;

    std::cout << "Program end." << std::endl;

    return 0;
}
