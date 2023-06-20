#include<iostream>
using namespace std;
int num;
double num1,num2,num3;
double max(double num1,double num2);
double max(double num1,double num2,double num3);
int main()
{
    
    cout<<"enter how many numbers";
    cin>>num;
    if(num=2){
       cout<<max(num1,num2);
    }
    else{
       cout<<max(num1,num2,num3);
    }
}
double max(double num1,double num2,double num3){
    cout<<"enter the numbers";
    cin>>num1>>num2>>num3;
    if(num1>num2 && num1>num3){
        cout<<num1;
    }
    else if(num2>num3 && num2>num1){
        cout<<num2;
    }
    else{
       cout<<num3; 
    }
}
double max(double num1,double num2){
    cout<<"enter the numbers";
    cin>>num1>>num2;
    if(num1>num2){
        cout<<num1;
        }
    else{
       cout<<num2; 
    }
}

