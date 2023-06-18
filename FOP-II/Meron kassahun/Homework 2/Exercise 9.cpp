//q9
#include <iostream>
using namespace std;
void swapValues(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortValues(int& a, int& b, int& c) {
    // print initial values
    cout << "Initial values: " << a << ", " << b << ", " << c <<endl;

    // sort values
    if (a < b) {
        swapValues(a, b);
    }
    if (b < c) {
        swapValues(b, c);
    }
    if (a < b) {
        swapValues(a, b);
      }
   cout << "Sorted values: " << a << ", " << b << ", " << c <<endl;   
}      
int main(){
   int x,y,z;
   cout<<"enter the numbers you want\n";
   cin>>x>>y>>z;
   sortValues(x, y, z);
    return 0;
}
