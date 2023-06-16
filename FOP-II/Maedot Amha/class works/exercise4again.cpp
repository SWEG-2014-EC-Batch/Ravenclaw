#include <iostream>
#include"myfxn.h"
#include"newfxn.h"
using namespace std;
//function declaration or prototype
int main(){

  int firstNum;
  double secondNum,multip;
  name();

    cout<<"Please enter two numbers:";
    cin>>firstNum>>secondNum;

         multip=getProduct(firstNum,secondNum);//actual parameters

         cout<<"the multiple of two is: "<<multip;
}
