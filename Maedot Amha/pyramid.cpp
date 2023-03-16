    #include <iostream>
using namespace std;

   int rows;
int main (){
     cout<< "Enter number of rows: ";
     cin>> rows;

     for (int i = 1, space = rows - 1; i<= rows; i++, space--) {
         for (int j = 1; j <= space; j++) {
             cout << " ";
         }
         for (int j = 1; j <= 2 * i - 1; j++) {
             cout << "*";
         }
        cout << endl;
     }}