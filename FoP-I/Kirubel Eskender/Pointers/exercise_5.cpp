#include <iostream>

using namespace std;
int main() {
    float a[5], *ptr;
    ptr = &(a[3]);
    *ptr = 9.8l;
    ptr -=2;
    *ptr = 5.0; ptr--;
    *ptr = 6.0;
    ptr += 3;
    *ptr = 7.0;
    /*
     a[0]:6
     a[1]:5
     a[2]:0
     a[3]:7
     a[4]:0.00729561
     */

    cout<< a[4];
    return 0;
}
