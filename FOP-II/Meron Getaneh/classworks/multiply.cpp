#include<iostream>
using namespace std;
float product(float num1,float num2)
{
    return num1*num2;
}
int main()
{
    float num1,num2,result;
    cout<<"enter the numbers\n";
    cin>>num1>>num2;
    result=product(num1,num2);
    cout<<"the product of the numbers is"<<result<<endl;
    return 0;

}
