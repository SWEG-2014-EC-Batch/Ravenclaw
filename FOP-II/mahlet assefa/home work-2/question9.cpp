#include<iostream>
using namespace std;
void swapValues(int &val1,int &val2,int &val3);
int main(){
    int val1=1,val2=3,val3=2;
    cout<<"main:before swap"<<" val1:"<<val1<<" val2:"<<val2<<" val3:"<<val3<<endl;
    swapValues(val1,val2,val3);
    cout<<"main:after swap"<<" val1: "<<val1<<" val2: "<<val2<<" val3:"<<val3<<endl; 
}
void swapValues(int &newval1,int &newval2,int &newval3){
    int temp;
    cout<<"before ascending swap"<<" newval1:"<<newval1<<" newval2:"<<newval2<<" newval3:"<<newval3<<endl;
    //using bubble sort
        if(newval1<newval2){
            swap(newval1,newval2);
          if(newval2<newval3){
            swap(newval2,newval3);
        }
           if(newval1<newval2){
            swap(newval1,newval2);
         }
        }  
    cout<<"after ascending order swap"<<" newval1: "<<newval1<<" newval2: "<<newval2<<" newval3:"<<newval3<<endl; 
}

