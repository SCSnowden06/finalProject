/*
Samuel Snowden
CIS1202.501
Final project, emplyee payroll program
Due 05/03/2024
*/
#include <iostream>
#include "HourlyEmployee.h"
#include "SalariedEmployee.h"

// Function to prompt the user for input and validate it
template <typename T>
T getUserInput(const std::string& prompt) {
    T value;
    std::cout << prompt;
    while (!(std::cin >> value)) {
        std::cin.clear(); // Clear the error flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard invalid input
        std::cout << "Invalid input. Please try again: ";
    }
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Discard any additional characters
    return value;
}

int main() {
    std::cout << "Program start." << std::endl;

    // Prompt the user to create an hourly employee
    std::cout << "Creating an Hourly Employee:" << std::endl;
    std::string name = getUserInput<std::string>("Enter employee name: ");
    int id = getUserInput<int>("Enter employee ID: ");
    std::string title = getUserInput<std::string>("Enter employee job title: ");
    double hourlyRate = getUserInput<double>("Enter hourly rate: ");
    double hoursWorked = getUserInput<double>("Enter hours worked: ");
    HourlyEmployee hourlyEmp(name, id, title, hourlyRate, hoursWorked);

    // Prompt the user to create a salaried employee
    std::cout << "\nCreating a Salaried Employee:" << std::endl;
    name = getUserInput<std::string>("Enter employee name: ");
    id = getUserInput<int>("Enter employee ID: ");
    title = getUserInput<std::string>("Enter employee job title: ");
    double annualSalary = getUserInput<double>("Enter annual salary: ");
    SalariedEmployee salariedEmp(name, id, title, annualSalary);

    std::cout << "\nEmployee data created." << std::endl;

    // Display information for each employee
    std::cout << "\nHourly Employee Information:" << std::endl;
    hourlyEmp.displayInfo();
    std::cout << "Hourly Pay: $" << hourlyEmp.calculatePay() << std::endl;

    std::cout << "\nSalaried Employee Information:" << std::endl;
    salariedEmp.displayInfo();
    std::cout << "Monthly Pay: $" << salariedEmp.calculatePay() << std::endl;

    std::cout << "\nProgram end." << std::endl;

    return 0;
}
