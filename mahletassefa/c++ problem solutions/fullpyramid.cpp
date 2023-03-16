#include <iostream>
using namespace std;
int main(){
  int row;
  int k;
  int space;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  for (i=1;i<=row;i++;k=0){
      for (space=1;space<=row-i;space++)
      { cout << " ";
         }
    if (k!= 2*i-1){
        cout <<"*";
        k++;
    }
cout <<endl;
      
  }


  
  }