#include <iostream>
using namespace std;
int main(){
  int n;
  int sum=0;
  int num;
  cout << "enter the integer number"<<endl;
  cin >> n;
  while(n>0){
     num = n%10;
     sum += num;
     n=n/10;
     
  }
  cout << "the digit sum is "<< sum <<endl;
  return 0;
  }