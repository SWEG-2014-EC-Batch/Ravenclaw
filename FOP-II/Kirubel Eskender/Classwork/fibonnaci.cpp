#include <iostream>
#include<string.h>

using namespace std;

int fibonacciSeries(int amount = 10);

int main() {
    int amount;
    cout << "enter amount of number" << endl;
    cin >> amount;
    fibonacciSeries();
    cout << endl;
    fibonacciSeries(amount);
}

int fibonacciSeries(int amount) {
    int c;
    int a = 1;
    int b = 0;
    for (int i = 0; i < amount; i++){
        c = a + b;
        a = b;
        b = c;
        cout << c << ",";
    }
}
