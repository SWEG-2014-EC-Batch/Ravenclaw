#include <iostream>

using namespace std;

int max(double a, double b)
{
    if (a > b){
        return a;
    } else if (b > a){
        return b;
    }
}

int max(double a, double b, double c)
{
    if (a > b && a > c){
        return a;
    } else if (b > a && b > c){
        return b;
    } else if (c > b && c > a){
        return c;
    }
}

int main() {
    int amount;
    double num1;
    double num2;
    double num3;
    cout << "how many numbers (choose 3 or 2)" << endl;
    cin >> amount;
    if (amount == 3){
        cout << "enter 3 numbers" <<endl;
        cin >> num1;
        cin >> num2;
        cin >> num3;
        cout << "the greater number is " << max(num1, num2, num3);
    } else if (amount == 2){
        cout << "enter 2 numbers" <<endl;
        cin >> num1;
        cin >> num2;
        cout << "the greater number is " << max(num1, num2);
    } else {
        cout << "invalid";
    }
}

