#include <iostream>
using namespace std;
int main(){
  int row;
  int m;
  int space;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  for (i=1;i<=row;i++;m=0){
      for (space=1;space<=row-i;space++)
      { cout << " ";
         }
    if (m!= 2*i-1){
        cout <<"*";
        m++;
    }
cout <<endl;
      
  }


  
  }
