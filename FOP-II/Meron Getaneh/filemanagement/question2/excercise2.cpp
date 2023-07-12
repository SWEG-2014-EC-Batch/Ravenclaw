#include <iostream>
#include <fstream>
using namespace std;

struct Employee {
    string name;
    float payRate;
    float work_hour;
};

float calculateRegularPay(float payRate, float work_hour) {
    if (work_hour <= 40) {
        return payRate * work_hour;
    } else {
        return payRate * 40;
    }
}

float calculateOvertimePay(float payRate, float work_hour) {
    if (work_hour > 40) {
        return (work_hour - 40) * (payRate * 1.5);
    } else {
        return 0;
    }
}

float calculateGrossPay(float regularPay, float overtimePay) {
    return regularPay + overtimePay;
}

int main() {
    ifstream inputFile("employee.txt");
    string fileName = "employee.txt";
    if (!inputFile) {
        cout << "Error, can't open the file: " << fileName << endl;
        return 1;
    }

    int employeeCount = 0;
    float totalRegularPay = 0, totalOvertimePay = 0, totalGrossPay = 0;

    Employee employees[4]; 

    while (inputFile >> employees[employeeCount].name >> employees[employeeCount].payRate >> employees[employeeCount].work_hour) {
        float regularPay = calculateRegularPay(employees[employeeCount].payRate, employees[employeeCount].work_hour);
        float overtimePay = calculateOvertimePay(employees[employeeCount].payRate, employees[employeeCount].work_hour);
        float grossPay = calculateGrossPay(regularPay, overtimePay);
        totalOvertimePay += overtimePay;
        totalRegularPay += regularPay;
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