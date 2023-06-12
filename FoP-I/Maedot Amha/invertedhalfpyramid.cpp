#include <iostream>
#include <cmath>
using namespace std;
int i;
int k;
int row;
int main() {
    cout<< " enter the number the number of rows";
    cin >> row;
    for ( i=1;i<= row ;i+=1){
        for ( k= row;k>=i;k--) {
        cout << " x";
            } cout << endl;
    }}