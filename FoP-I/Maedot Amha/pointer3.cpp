#include <iostream>
using namespace std;
int main (){
    int k=4, *ptr, **ptoptr;
    ptr=&k, ptoptr = &ptr;
    cout << ptr;
    cout<< "k= "<< k <<endl;
    *ptr = k+10;
     cout << "x= "<<k<<endl;
     **ptoptr=*ptr+k;
     cout<<"k= "<<k<<endl;

}