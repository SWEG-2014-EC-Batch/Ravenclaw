 #include <iostream>
 #include <cmath>
using namespace std;
int count = 10,row, column; 
    int main () {
        cout << "Enter the number of rows: ";
        cin >> row;

    cout << "Enter the number of columns: ";
    cin >> column;
    
    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
             cout << count << " ";
             count++;
        }
         cout << endl; 
     }}