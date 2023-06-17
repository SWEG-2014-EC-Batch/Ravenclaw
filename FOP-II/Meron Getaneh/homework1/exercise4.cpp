#include<iostream>
using namespace std;
double getproduct(int num1, double num2);
int main(){
    int firstnum;
    double secondnum;
    cout<<"enter the first number\n";
    cin>>firstnum;
    cin>>secondnum;
    cout<<"enter the second number\n";
    double product=getproduct(firstnum,secondnum);
    cout<<"the ptoduct of the numbers is"<<product<<endl;
    return 0;
}
double getproduct(int firstnum, double secondnum){
    return firstnum*secondnum;
}


