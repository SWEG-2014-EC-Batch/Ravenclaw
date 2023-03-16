#include <iostream>
using namespace std;
int main(){
  int n;
  int counter=0;
  cout << "enter the integer number"<<endl;
  cin >> n;
  while(n!=0){
     n= n/10;
     counter++;
  }
  cout << "the number of digit is "<< counter;
  return 0;
  }
