#include <iostream>
using namespace std;
int main(){
  int row;
  int i;
  int k=0;
  int space;
  int j;
  cout << "enter the number of rows"<<endl;
  cin >> row;
  for (i=1;i<=row;i++){
      for (space=1;space<=row-i;++space){ 
        cout << " ";
         }
         for(int j = i; j <= 2*i-1; ++j)
            cout << "* ";

        for(int j = 0; j < i-1; ++j)
            cout << "* ";

    while (k!= 2*i-1){
        cout <<"*";
        ++k;
    }
   cout << endl;
      
  }
  return 0;
}