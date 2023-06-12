#include <iostream>
#include <cmath>
using namespace std;
int size;
int main () {
    cout<< " enter size";
    cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (i == 0 || i == size- 1) {
                cout << "*";
            } else {
                if (k == 0 || k == 2 * i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
    cout << endl;
    }