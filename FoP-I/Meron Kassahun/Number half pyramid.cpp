#include <iostream>
using namespace std;
int main(){
  int row,i;
  int column;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  for (i=1;i<=row;i++){
    cout << endl;
         for (column= 1; column <= i; column++){
                cout << column << " ";
                }
    }
    cout << endl;
  }
