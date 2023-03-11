//bmi calculator
#include<iostream>
using namespace std;
int main()
{
    float weight,height,bmi;
    cout<<"enter your weight:\n";
    cin>>weight;
    cout<<"enter your height:\n";
    cin>>height;
    bmi=weight/(height*height);
    cout<<"your bmi is"<<bmi<<endl;
}
