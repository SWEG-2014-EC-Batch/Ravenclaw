#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int x;
    int y;
    int power;

    cout<<"input the x value: ";
    cin>>x;
    cout<<"input the y value: ";
    cin>>y;

    power = pow(x,y);
    cout<<"the result is " <<power;

    return 0;
}
