#include<iostream>
using namespace std;
int myproduct(int mylist[],int a);

int main()
{
    int mylist[100];
    int a;
    cout<<"enter the amount of number you want\n";
    cin>>a;
    for(int i=1;i<=a; i++){
        cout<<"enter the"<<i<<"th number\n";
        cin>>mylist[i];
    }
    
    cout<<myproduct(mylist , a);
    return 0;
}
int myproduct(int mylist[],int a){
    int product=1;
    for(int i=1;i<=a;i++){
        product*= mylist[i];
    }
    return product;
}
