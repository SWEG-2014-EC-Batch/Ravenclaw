#include<iostream>
#include<cassert>
using namespace std;
void scale(double factor, double &num1, double &num2) {
    assert(factor != 0);
    cout<<"before scaling: num1="<<num1<<" "<<"num2="<<num2<<endl;
    //scaling
    num1 *= factor;
    num2 *= factor;
    cout<<"after scaling: num1="<<num1<<" "<<"num2="<<num2<<endl;
}

int main() {
    double num1,num2,factor;

    cout << "Enter the first value: ";
    cin >> num1;
    cout << "Enter the second value: ";
    cin >> num2;
    cout << "Enter the scaling factor: ";
    cin >> factor;
    scale(factor, num1, num2);
   
    return 0;
}

