#include <iostream>
using namespace std;
int main(){
  int row;
  int column;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  cout << "enter the number of column"<<endl;
  cin >> column;
  for (row=1;row<=5;row++){
        cout << endl;
        for (column= 1; column <= 6; column++){
           cout << "*";
        }
    }
}
