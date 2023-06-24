#include <iostream>
#include <cmath>
using namespace std;
double resistance[5]={16, 27, 39, 56, 81};
double mycurrent[5], mypower[5];
double total_current = 0, total_power = 0, total_resistance = 0;
void print(double mypower[], double mycurrent[], double resistance[]);
void calculatepower(double mycurrent[], double resistance[], int size);
void current(double mycurrent[], int size);
void calculateTotal();
int main() {
    current(mycurrent, 5);
    calculatepower(mycurrent, resistance, 5);
    calculateTotal();
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
void calculateTotal() {
    for (int i = 0; i < 5; i++) {
        total_current += mycurrent[i];
        total_power += mypower[i];
        total_resistance += resistance[i];
    }
}
void print(double mypower[], double mycurrent[], double resistance[]) {
    cout << "Resistance\t\tCurrent\t\tPower\t\t" << endl;
    for(int n = 0; n < 5; n++){ // fixed typo here
        cout << resistance[n] << "\t\t" << "\t"<<mycurrent[n] << "\t" << "\t"<<mypower[n]<<endl;
    }
    cout << "Total Resistance\t\tTotal Current\t\tTotal Power\t\t" << endl;
    cout << total_resistance << "\t\t\t" << "\t"<<total_current << "\t\t\t"<< total_power << endl;
}
