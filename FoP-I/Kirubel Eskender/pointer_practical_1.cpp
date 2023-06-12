#include <iostream>

using namespace std;
int main() {
    double price[] = {10.62, 14.89, 13.21, 16.55, 18.62, 9.47, 6.58, 18.32, 12.15, 3.98};
    double quantity[] = {4, 8.5, 6, 7.35, 9, 15.3, 3, 5.4, 2.9, 4.8};
    double *p1 = price;
    double *p2 = quantity;
    double amount[10];
    double *p3 = amount;
    for (int i = 0; i <= 10; i++) {
        p3[i] = p1[i] + p2[i];
    }
    for (int k = 0; k <= 10; k++) {
    cout << p3[k] << "\t";
    }
    return 0;
}
