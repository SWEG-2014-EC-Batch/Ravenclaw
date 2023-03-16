#include <iostream>

using namespace std;
int main() {
    float grossSalary;
    float workedHours;
    const float pension = 0.07;
    float overtime;
    float netSalary;
    float overtimeSalary;
    float taxRate;

    cout << "enter the gross salary: " << endl;
    cin >> grossSalary;
    cout << "enter worked hours: " << endl;
    cin >> workedHours;

    if (workedHours > 40) {
        cout << "enter overtime bonus rate per hour: " << endl;
        cin >> overtime;
        overtimeSalary = ((workedHours - 40) * overtime);

        if (grossSalary < 200 && grossSalary >= 0) {
            taxRate = 0;
        } else if (grossSalary >= 200 && grossSalary < 600) {
            taxRate = 0.1;
        } else if (grossSalary >= 600 && grossSalary < 1200) {
            taxRate = 0.15;
        } else if (grossSalary >= 1200 && grossSalary < 2000) {
            taxRate = 0.2;
        } else if (grossSalary >= 2000 && grossSalary < 3500) {
            taxRate = 0.25;
        } else if (grossSalary >= 3500) {
            taxRate = 0.3;
        } else {
            cout << "Error input.";
        }
    } else if (workedHours <= 40) {
        overtimeSalary = 0;

        if (grossSalary < 200 && grossSalary >= 0) {
            taxRate = 0;
        } else if (grossSalary >= 200 && grossSalary < 600) {
            taxRate = 0.1;
        } else if (grossSalary >= 600 && grossSalary < 1200) {
            taxRate = 0.15;
        } else if (grossSalary >= 1200 && grossSalary < 2000) {
            taxRate = 0.2;
        } else if (grossSalary >= 2000 && grossSalary < 3500) {
            taxRate = 0.25;
        } else if (grossSalary >= 3500) {
            taxRate = 0.3;
        } else {
            cout << "Error input.";
        }
    }
    netSalary = grossSalary - (grossSalary * pension) - (grossSalary * taxRate) + overtimeSalary - (overtimeSalary * taxRate);
    cout << "The net salary is " << netSalary;
}