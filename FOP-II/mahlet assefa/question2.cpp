#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    string name;
    double payRate;
    double hoursWorked;
};

double calculateRegularPay(double payRate, double hoursWorked) {
    if (hoursWorked <= 40) {
        return payRate * hoursWorked;
    } 
}

double calculateOvertimePay(double payRate, double hoursWorked) {
    if (hoursWorked <= 40) {
        return 0;
    } else {
        return (payRate * 1.5) * (hoursWorked - 40);
    }
}

double calculateGrossPay(double regularPay, double overtimePay) {
    return regularPay + overtimePay;
}

int main() {
    ifstream inputFile("employee_data.txt");
    string fileName = "employee_data.txt";
    if (!inputFile) {
        cout << "Error opening the file: " << fileName << endl;
        return 1;
    }
  
    int employeeCount = 0;
    double totalRegularPay = 0;
    double totalOvertimePay = 0;
    double totalGrossPay = 0;

    Employee employees[4]; // assuming we have a maximum of 50 employees

    while (!inputFile.eof()) {
        inputFile >> employees[employeeCount].name;
        inputFile >> employees[employeeCount].payRate;
        inputFile >> employees[employeeCount].hoursWorked;

        double regularPay = calculateRegularPay(employees[employeeCount].payRate, employees[employeeCount].hoursWorked);
        double overtimePay = calculateOvertimePay(employees[employeeCount].payRate, employees[employeeCount].hoursWorked);
        double grossPay = calculateGrossPay(regularPay, overtimePay);

        totalRegularPay += regularPay;
        totalOvertimePay += overtimePay;
        totalGrossPay += grossPay;

        cout << "Employee: " << employees[employeeCount].name << endl;
        cout << "Regular Pay: " << regularPay << endl;
        cout << "Overtime Pay: " << overtimePay << endl;
        cout << "Gross Pay: " << grossPay << endl << endl;

        employeeCount++;
    }

    cout << "Total Regular Pay: " << totalRegularPay << endl;
    cout << "Total Overtime Pay: " << totalOvertimePay << endl;
    cout << "Total Gross Pay: " << totalGrossPay << endl;

    return 0;
}

