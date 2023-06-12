#include <iostream>
using namespace std;
int main(){
  int row;
  int column;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  cout << "enter the number of column"<<endl;
  cin >> column;
  int i;
  int j;
    for (i=1; i<=row; i++)
       {
        if (i==1 || i==row)
            for (j=1; j<=row; j++)
                cout << "*";
        else
            for (j=1; j<=row; j++)
                if (j==1 || j==row)
                    cout << "*";
                else
                    cout << " ";
        cout << endl;
    }
}


