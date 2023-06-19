#include <iostream>
#include <cassert>

void scale(double scaler, double &num1, double &num2);

using namespace std;
int main() {

    double scaler;
    double num1, num2;
    cout << "SCALER" << endl;
    cout << "input the scale multiplier: ";
    cin >> scaler;
    cout << endl << "input the two values" << endl;
    cin >> num1;
    cin >> num2;
    scale(scaler, num1, num2);

}
void scale(double scaler, double &num1, double &num2){
    assert(scaler != 0);
    cout << "the un-scaled values are " << num1 << " and " << num2 << endl;
    num1 *= scaler;
    num2 *= scaler;
    cout << "the scaled values are " << num1 << " and " << num2;
}
