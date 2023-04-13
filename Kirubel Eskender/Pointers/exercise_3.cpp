#include <iostream>

using namespace std;
int main() {
    int a{50}, b{90};
    const int* const ptr = &a;
    cout << *ptr << "\t" << ptr <<"\n";
    ptr = &b;
    //invalid data type
    *ptr = 30;
    //can't assign to a constant
    return 0;
}
