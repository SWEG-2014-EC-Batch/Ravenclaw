#include<iostream>
using namespace std;
const int MAX_SIZE = 100;
int size;
int myarray[MAX_SIZE];
int arraysum(int myarray[], int size) {
    if(size==0){
        return 0;
    }else{
        return (myarray[size-1]+arraysum(myarray,size-1));
    }
}
int main(){
    cout<<"enter the amount of numbers you want\n";
    cin>>size;
    for(int num=0;num<size;num++){
        cout<<"enter the"<<num+1<<"number\n";
        cin>>myarray[num];
    }
    cout<<" the sum is"<<arraysum(myarray,size)<<endl;
}
