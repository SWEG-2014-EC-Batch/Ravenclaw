#include <iostream>

using namespace std;
double getProduct(int firstNum, double secondNum);

int main() {
    int firstNum;
    double secondNum;
    double product;
    cout <<"Input the numbers" << endl;
    cin >> firstNum;
    cout <<endl;
    cin >> secondNum;
    product = getProduct(firstNum, secondNum);
    cout << "The result is " <<product;
}

double getProduct(int firstNum, double secondNum){
    return firstNum * secondNum;
}
