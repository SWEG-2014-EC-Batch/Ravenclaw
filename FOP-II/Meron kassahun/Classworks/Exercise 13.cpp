#include<iostream>
using namespace std;
double max(double a,double b){
    if(a>b){
        return a;
    }else{
        return b;
    }
}
double max(double a,double b,double c)
{
    if(a>b&& a>c){
        return a;
    }else if(b>c && b>a){
       return b;
    }else{ 
        return c;
    }
}
int main(){
    int nums;
    double num1,num2,num3;
    
    cout<<"enter the amount of numbers you are comparing\n";
    cin>>nums;
    if(nums==2){
    cout<<"enter the numbers\n";
    cin>>num1>>num2;
    cout<<max(num1,num2);
    }else if(nums==3){
     cout<<"enter the numbers\n";
     cin>>num1>>num2>>num3;
     cout<<max(num1,num2,num3);

    }else{
        cout<<"error\n";
    }
    return 0;
}
