#include<iostream>
using namespace std;
int fibonacci(int amount=10);
int a=0, b=1,c;

int main(){
    int amount;
    cout<< "enter a number";
    cin >>amount;
    if(amount==0){
        fibonacci();
    }else {
        fibonacci(amount);
    }
}
int fibonacci(int amount){
    cout<<a<<","<<b<<",";
    for(int i=0;i<amount-2;i++){
        /*if (i=0){
            cout << a<<",";
        }if (i=1){
            cout <<b <<",";
        }*/
    c=a+b;
    a=b;
    b=c ;
   cout << c<<",";
    }
    
}