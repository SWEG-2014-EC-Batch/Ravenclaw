//question #7
#include<iostream>
using namespace std;

int product(int numList[],int num);

int main()
{
    int num;
    int numList[50];
    cout<<"How many numbers do you want to multiply? :";
    cin>>num;
    for(int i=1;i<=num; i++){
        cout<<"enter the number/s : ";
        cin>>numList[i];
    }
    
    cout<<product(numList , num) << endl;
    return 0;
}
int product(int numList[],int num){
    int product=1;
    for(int i=1;i<=num;i++){
        product*= numList[i];
    }
    return product;
}