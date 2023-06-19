#include <iostream>

void swapValue(int num1, int num2, int num3);

using namespace std;
int main() {
    int num1, num2, num3;
    cout << "VALUE SWAPPER" << endl;
    cout << "INPUT THE 3 INTEGERS" << endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout << "the arranged values are: ";
    swapValue(num1, num2, num3);
}

void swapValue(int num1, int num2, int num3){
    if (num1 >= num2 && num1 >= num3){
        if (num2 >= num3){
        } else {
            swap(num2, num3);
        }
    } else if (num2 >= num1 && num2 >= num3){
        swap(num2, num1);
        if (num3 >= num2){
            swap(num2, num3);
        }
    } else if (num3 >= num1 && num3 >= num2){
        swap(num3, num1);
        if (num3 >= num2){
            swap(num2, num3);
        }
    }
    cout << num1 << ", " << num2 << ", " << num3;
}

