#include <iostream>
using namespace std;

double myAray[4] = {2,2,4,5}, sum;
int sumFxn(double myAray[4],int size);

int main(){
cout << "sum of  "<< sumFxn(myAray,4)<<endl;

}
int sumFxn(double myAray[4], int size){
   
    if(size < 0){
        return 0;
    }else{
       return( myAray[size] + sumFxn(myAray, size-1));
    }
}
