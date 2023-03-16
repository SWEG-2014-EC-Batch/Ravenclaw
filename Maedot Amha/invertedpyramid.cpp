#include <iostream>
#include <cmath>
using namespace std;
int main () {

       int rows;

     cout << "Enter number of rows: ";
     cin >> rows;

     for (int i = rows, space = 0; i >= 1; i--, space++) {
         for (int j = 1; j <= space; j++) {
             cout << " ";
         }
         for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
         }
        cout << endl;
     }}