#include<iostream>
using namespace std;
int digit=0,num;
int sum_of_digit(int num,int digit){
 if(num<=0){
    return 0;
 }else{
    digit+=num%10;
    return digit+(sum_of_digit(num/10,0));
 }
}
int main(){
cout<<"enter the number\n";
cin>>num;
cout<<"the sum of the digits is:"<<sum_of_digit( num,digit);
}
