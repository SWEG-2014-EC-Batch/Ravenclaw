#include <iostream>
using namespace std;
int main(){
  int row;
  int column;
  int i;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  cout << "enter the number of column"<<endl;
  cin >> column;
  for (i=row;i>=1;--i){
    cout << endl;
         for (column= 1; column <= i; column++){
                cout << "*";
    }
}
}
