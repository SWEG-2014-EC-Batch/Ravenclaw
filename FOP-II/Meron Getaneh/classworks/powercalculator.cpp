#include <iostream>
#include <cmath>
using namespace std;

double resistance[5]={16, 27, 39, 56, 81};
double mycurrent[5], mypower[5];

void print(double mypower[], double mycurrent[], double resistance[]);
void calculatepower(double mycurrent[], double resistance[], int size);
void current(double mycurrent[], int size);

int main() {
    current(mycurrent, 5);
    calculatepower(mycurrent, resistance, 5);
    print(mypower, mycurrent, resistance);
    return 0;
}

void current(double mycurrent[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "Enter the current for element " << i+1 << ": ";
        cin >> mycurrent[i];
    }
}

void calculatepower(double mycurrent[], double resistance[], int size) {
    for (int n = 0; n < size; n++) {
        mypower[n] = pow(mycurrent[n], 2) * resistance[n];
    }
}

void print(double mypower[], double mycurrent[], double resistance[]) {
    cout << "Resistance\t\tCurrent\t\tPower\t\t" << endl;
    for(int n = 0; n < 5; n++){ // fixed typo here
        cout << resistance[n] << "\t\t" << "\t"<<mycurrent[n] << "\t" << "\t"<<mypower[n]<<endl;
    }
}