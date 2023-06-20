#include<iostream>
using namespace std;
bool checkYear();
int main(){
    checkYear();
}
bool checkYear(){
    int year;
    cout<<"enter a year";
    cin>>year;
    if(year%4 !=0){
        cout<<"0";
    }
    if (year%100 != 0 && year%400 ==0){
           cout<<"1";
    }
    
    else{
        cout<<"1"; 
    }
}