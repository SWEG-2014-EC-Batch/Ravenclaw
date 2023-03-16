  #include <iostream>
#include <cmath>
using namespace std;
int letter;

int main () {
    cout << "enter size";
    cin>> size;
    letter = 65;
    cout << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j <= i; j++) {
            cout << ((char) (letter + j));
        }
        cout << endl;
    }}