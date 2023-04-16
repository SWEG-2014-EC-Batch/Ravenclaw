#include<iostream>
using namespace std;
int main(){
     int num = 100;
     int *ptr=&num;
     cout<<num<<endl;
     cout<<&num<<endl; 
     cout<<num<<"  "<<*ptr<<endl;
     cout<<&ptr<<endl;
     *ptr=0;//to redeclare a pointer we only use when we add int the compiler thinks we are assigning new pointer with the same name;
     cout<<*ptr<<endl;
     return 0;
     }

     