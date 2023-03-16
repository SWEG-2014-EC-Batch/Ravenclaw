   #include <iostream>
#include <cmath>
using namespace std;
int letter;

int main () {
    cout<< "enter size"
    cin >> size
    for (int i = 0; i < size; i++)
        cout << "*" ;
    for (int i = size; i >= 1; --i)
    {
        for (int j = 0; j < size - i; ++j){
            while (int h != (2 * i - 1))
            {
                if (h == 0 || h == i - 1)
                    cout << "*" ;
                else
                    cout << " " ;
                h++;
            }
        }
        h = 0;
        cout << endl;
    }
    cout << endl;}