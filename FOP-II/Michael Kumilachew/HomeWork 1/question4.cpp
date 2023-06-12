#include <iostream>
using namespace std;

int getProduct(int num1, double num2);

int main(){
    int firstNum = 5;
    double secondNum = 5.5;

    getProduct(firstNum, secondNum);
}

int getProduct(int num1, double num2){
    double product;

    product = num1 * num2;
    cout << product << endl;
}