#include<iostream>
using namespace std;
void swapvalues(int &num1,int &num2){
  num1=num1+num2;
  num2=num1-num2;
  num1=num1-num2;
}
 //copmare the numbers
void compare(int &num1,int &num2,int &num3){
 //initial values
    cout<<"values before sorting"<<" "<<num1<< ", " << num2 << ", " << num3<<endl;
    if (num1 < num2) {
        swapvalues(num1, num2);
    } 
     if (num2 < num3) {
        swapvalues(num2,num3);
    }
    if (num1 < num2) {
        swapvalues(num1,num2);
    }
    //sorted values
    cout<<"values after sorting"<<" "<< num1<< ", " << num2 << ", " << num3<<endl;
 }   
int main(){
        int num1,num2,num3;
        cout<<"enter the numbers you want\n";
        cin>>num1>>num2>>num3;
        compare(num1,num2,num3);
        return 0;
    }
