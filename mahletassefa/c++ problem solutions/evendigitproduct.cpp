#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
      int n;
      int product = 1;
      int remainder;
    cout << "enter the integer number"<<endl;
    cin >> n;
    while(n>0){
    remainder= n%10;
      if (remainder%2==0){
         product = product * remainder;
         cout << product;
         n/=10;
    }
     else{
        
     }
        return 0;
    } 
    
    }