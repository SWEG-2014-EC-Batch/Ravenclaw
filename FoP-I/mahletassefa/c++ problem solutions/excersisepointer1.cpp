#include <iostream>
using namespace std;
int main(){
    int a{10};
    int b{20};

    int * ptr = {&a};//the mistake is on having the ptr const so to correct avoid const
    cout<< *ptr <<"\t";
    cout << ptr <<"\n";

    *ptr = 30;
    cout << *ptr << "\t";
    cout << ptr << "\n";
    ptr = &b;
    return 0;
}