#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

struct Employee {
    int id;
    char sex;
    double hourlyWage;
    int yearsWithCompany;
    double totalPay;
};

// Function to sort employees based on ID number
bool compareByID(const Employee& emp1, const Employee& emp2) {
    return emp1.id < emp2.id;
}

// Function to enter employee information
void enterEmployeeData(Employee& emp) {
    std::cout << "Enter ID: ";
    std::cin >> emp.id;
    std::cout << "Enter sex (m/f): ";
    std::cin >> emp.sex;
    std::cout << "Enter hourly wage: ";
    std::cin >> emp.hourlyWage;
    std::cout << "Enter years with the company: ";
    std::cin >> emp.yearsWithCompany;
    emp.totalPay = 0.0;
}

// Function to calculate total pay for each employee based on hours worked
void calculateTotalPay(std::vector<Employee>& employees) {
    for (auto& emp : employees) {
        double hoursWorked;
        std::cout << "Enter hours worked for employee " << emp.id << ": ";
        std::cin >> hoursWorked;
        emp.totalPay = hoursWorked * emp.hourlyWage;
    }
}

// Function to update employee information
void updateEmployeeData(std::vector<Employee>& employees) {
    for (auto& emp : employees) {
        std::cout << "Update hourly wage for employee " << emp.id << ": ";
        std::cin >> emp.hourlyWage;
        std::cout << "Update years with the company for employee " << emp.id << ": ";
        std::cin >> emp.yearsWithCompany;
    }
}

// Function to write employee records to a file
void writeToFile(const std::vector<Employee>& employees) {
    std::ofstream outputFile("employee_records.txt");
    if (outputFile.is_open()) {
        for (const auto& emp : employees) {
            outputFile << emp.id << " " << emp.sex << " " << emp.hourlyWage << " " << emp.yearsWithCompany << "\n";
        }
        outputFile.close();
    } else {
        std::cout << "Error: Failed to open the file for writing.\n";
    }
}

// Function to read employee records from a file
std::vector<Employee> readFromFile() {
    std::vector<Employee> employees;
    std::ifstream inputFile("employee_records.txt");
    if (inputFile.is_open()) {
        Employee emp;
        while (inputFile >> emp.id >> emp.sex >> emp.hourlyWage >> emp.yearsWithCompany) {
            emp.totalPay = 0.0;
            employees.push_back(emp);
        }
        inputFile.close();
    } else {
        std::cout << "Error: Failed to open the file for reading.\n";
    }
    return employees;
}

int main() {
    std::vector<Employee> employees;

    std::cout << "Enter employee information:\n";
    for (int i = 0; i < 10; ++i) {
        Employee emp;
        enterEmployeeData(emp);
        employees.push_back(emp);
    }

    std::sort(employees.begin(), employees.end(), compareByID);
    writeToFile(employees);

    calculateTotalPay(employees);
    std::cout << "\nTotal pay for each employee:\n";
    for (const auto& emp : employees) {
        std::cout << "Employee " << emp.id << ": $" << emp.totalPay << "\n";
    }

    updateEmployeeData(employees);
    writeToFile(employees);

    return 0;
}
