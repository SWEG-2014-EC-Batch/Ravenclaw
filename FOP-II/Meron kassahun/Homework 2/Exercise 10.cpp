//q10
#include <iostream>
using namespace std;

// Function for input
void getLength(double& feet, double& inches) {
    cout << "Enter length in feet and inches: ";
    cin >> feet >> inches;
}

// Function for calculation
void convertLength(double feet, double inches, double& meters, double& centimeters) {
    double totalInches = (feet * 12) + inches;
    double centiMeters = totalInches * 2.54;
    meters = centiMeters / 100;
    centimeters = fmod(centiMeters, 100);
}

// Function for output
void printLength(double feet, double inches, double meters, double centimeters) {
    cout << feet << " feet and " << inches << " inches is equal to " << meters;
    cout << " meters and " << centimeters << " centimeters." << endl;
}

int main() {
    char choice = 'y';
    while (choice == 'y' || choice == 'Y') {
        double feet, inches, meters, centimeters;
        getLength(feet, inches);
        convertLength(feet, inches, meters, centimeters);
        printLength(feet, inches, meters, centimeters);
        cout << "Would you like to convert another length? (y/n): ";
        cin >> choice;
    }

    return 0;
