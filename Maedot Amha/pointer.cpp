#include <iostream>
using namespace std;
int main(){
/*int value1 = 5, value2 = 15;
int *p1, *p2;
p1 = &value1;
p2 = &value2 ;

// p1= address of valuel
// p2 = address of value2
*p1 = 10;
// value pointed to by p1=10
*p2 = *p1;
//value pointed to by p2= value pointed to by p1
p1 = p2;
// p1 = p2 (pointer value copied)
*p1 = 20;
// value pointed to by p1 = 20
cout<< "valuel==" << value1;
cout<< " / value2==" << value2<< endl;
cout<<sizeof(p1)<< sizeof(*p1)<<sizeof(&p1)<<endl; 
return 0;*/
int num[6] = {1,2,3,4,5};
int *ptr = num ; 
cout << *ptr +1<< endl ;
cout<< *(num +1) << endl;
cout << num[1]<< endl;
}
