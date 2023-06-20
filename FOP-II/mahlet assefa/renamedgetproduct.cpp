#include <iostream>
using namespace std;
//function declaration or prototype
//double getProduct(int firstNum,double secondNum); 
int main(){
  int firstNum;
  double secondNum,multi;
  cout<<"enter two numbers: ";
  cin>>firstNum>>secondNum;
  multi=getProduct(firstNum,secondNum);//actual parameters
  cout<<"the multiple of two is: "<<multi;
}
//fuction call statement
double getProduct(int num1,double num2){//formal parameters
    return num1*num2;
}