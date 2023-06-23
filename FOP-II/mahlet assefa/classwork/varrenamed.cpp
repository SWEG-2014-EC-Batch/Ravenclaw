#include<iostream>
#include"new.h"
#include"varproduct.h"
using namespace std;
int main()
{
    int num,multiply,num1,num2;
    int numList[50];
    cout<<"How many numbers are needed to list?"<<endl;
    cin>>num;
    for(int i=1;i<=num; i++){
        cout<<"enter the"<<i<<"th number\n";
        cin>>numList[i];
    }
    multiply=mult(num1,num2);
    cout<<"product of the numbers is "<<multiply; 
    cout<<product(numList , num);
    return 0;
}
