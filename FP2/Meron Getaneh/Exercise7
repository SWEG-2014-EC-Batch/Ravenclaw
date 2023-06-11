#include<iostream>
using namespace std;
int myproduct(int mylist[],int num);

int main()
{
    int mylist[100];
    int num;
    cout<<"enter the amount of number you want\n";
    cin>>num;
    for(int i=1;i<=num; i++){
        cout<<"enter the"<<i<<"th number\n";
        cin>>mylist[i];
    }
    
    cout<<myproduct(mylist , num);
    return 0;
}
int myproduct(int mylist[],int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product*= mylist[i];
    }
    return product;
}
