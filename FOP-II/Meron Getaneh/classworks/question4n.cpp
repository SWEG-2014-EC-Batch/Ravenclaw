#include<iostream>
#include"function.h"
#include"message.h"
using namespace std;

int main(){
    int firstnum;
    double secondnum;
    cout<<"enter the first number\n";
    cin>>firstnum;
    cin>>secondnum;
    cout<<"enter the second number\n";
    double product=getproduct(firstnum,secondnum);
    cout<<"the ptoduct of the numbers is"<<product<<endl;
    message();
    return 0;
    
}



