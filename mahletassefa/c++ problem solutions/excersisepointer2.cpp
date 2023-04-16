#include <iostream>
using namespace std;
int main() {
    int a{10}, b{20};
     int* ptr;//deleting the const can enable us to reassign it
    ptr = &a;
    cout<<*ptr<<"\t"<<ptr<<"\n";
    ptr = &b;
    cout<<*ptr<<"\t"<<ptr<<"\n";

    *ptr = 30;
    return 0;
}