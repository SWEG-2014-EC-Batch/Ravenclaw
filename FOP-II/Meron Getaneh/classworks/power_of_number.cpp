#include <iostream>
#include <cmath>
using namespace std;
int powercalculator(int num,int power){
    if(power==0){
        return 1;
    }else if(power==1){
        return num;
    }else{
        return (num*powercalculator(num,power-1));
    }
}
int main(){
 int num,power;
 cout<<"enter the number\n";
 cin>>num;
 cout<<"enter the power\n";
 cin>>power;
 cout<<"the power of the number is"<<powercalculator(num,power);
}