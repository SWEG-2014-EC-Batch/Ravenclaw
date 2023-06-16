#include <iostream>
#include <cmath>
using namespace std;

double add(double num1, double num2);

int main(){
    double num1, num2;

    cout << "Enter a number to be cubed: ";
    cin >> num1;

    cout << "Enter a number to be square rooted: ";
    cin >> num2;

    double answer = add(num1, num2);
    cout << answer << endl;
}

double add(double num1, double num2){
    num1 = pow(num1, 3);
    num2 = sqrt(num2);

    double answer = num1 + num2;
    return answer;
}