#include <iostream>

using namespace std;
int main() {
    int a{10}, b{20};
    const int* ptr;
    ptr = &a;
    cout<<*ptr<<"\t"<<ptr<<"\n";
    ptr = &b;
    cout<<*ptr<<"\t"<<ptr<<"\n";

    *ptr = 30;
    // cant assign to a constant
    return 0;
}
