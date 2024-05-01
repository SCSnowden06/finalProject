#pragma once
#ifndef FILEHANDLER_H
#define FILEHANDLER_H

#include <vector>
#include "Employee.h"

class FileHandler {
public:
    static void saveEmployeeData(const std::vector<Employee*>& employees, const std::string& filename);
    static std::vector<Employee*> loadEmployeeData(const std::string& filename);
};

#endif // FILEHANDLER_H
