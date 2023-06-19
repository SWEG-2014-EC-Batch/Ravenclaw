#include<iostream>
using namespace std;
void switchvalues(float &num1,float &num2,float &num3);
void sawp(int num1,int num2);
int main(){
    float num1,num2,num3;
    cout<< "Enter three numbers to be arranged";
    cin>> num1>>num2>>num3;
    cout << "before being arranged"<<num1<<num2<<num3;
    switchvalues(num1,num2,num3);
       cout<< "arranged value is" << num1<<","<<num2<<","<<num3;
}
void swap(float &num1,float &num2){
    int temp = num1;
    num1 =num2;
    num2 = temp;
}
void switchvalues(float &num1,float &num2,float &num3){
    
    if (num1 < num2) {
       swap(num1, num2);
    }
    if (num1 < num3) {
       swap(num1, num3);
    }
    if (num2 < num3) {
        swap(num2, num3);
    }
    
    
}
