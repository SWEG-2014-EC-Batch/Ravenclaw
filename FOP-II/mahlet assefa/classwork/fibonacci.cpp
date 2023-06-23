#include<iostream>
using namespace std;
int fibval,num;
int fib(int num=3);
int main(){
    cout<<"enter the number:"<<endl;
    cin>>num;
    cout<<fib(num);
    cout<<fib();
    
}
int fib(int num){
   if(num==1||num==2)
      return 1;
   else if(num>2){
          fibval=(num-1)+(num-2);
          cout<<fibval;
   }   
}
