#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int number){
    if(number==1){
    return false;
    }
    for(int i=2; i<=sqrt(number);i++){
        if(number%i==0){
        return false;
        }else{
        return true;
        }
    }
}
int main(){
    int number;
    cout<<"enter an integer number between 1 and 1000\n";
    cin>>number;
    if(isprime(number)){
        cout<<number<<"is a prime number"<<endl;
    }else{
        cout<<number<<"is not a prime number"<<endl;
    return 0;
    }
}
