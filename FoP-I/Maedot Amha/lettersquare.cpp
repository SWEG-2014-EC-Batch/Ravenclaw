  #include <iostream>
#include <cmath>
using namespace std;
int letter;

int main () {letter = 65;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 6; j++) {
            cout << ((char) (letter)) ;
            letter = letter + 1;
        }
        cout << endl;
    }}