#include <iostream>
#include <math.h>

using namespace std;
double addition(double num1, double num2);

int main() {
    double num1;
    double num2;
    double answer;
    cout <<"Input the numbers" << endl;
    cin >> num1;
    cout <<endl;
    cin >> num2;
    answer = addition(num1, num2);
    cout << "The result is " <<answer;
}

double addition(double num1, double num2){
    return  pow(num1, 3) + sqrt (num2);
}