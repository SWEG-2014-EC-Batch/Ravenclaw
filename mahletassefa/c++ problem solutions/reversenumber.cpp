#include <iostream>
using namespace std;
int main(){
  int n;
  int reversed_num = 0;
  int remainder;
  cout << "enter the number(the integer number)"<<endl;
  cin >> n;
  while(n!=0){
    remainder= n%10;
    reversed_num = reversed_num*10 + remainder;
    n/=10;
 } 
  cout << "reverse number is "<< reversed_num ;
return 0;

}