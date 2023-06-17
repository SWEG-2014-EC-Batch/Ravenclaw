#include<iostream>
#include<cassert>
using namespace std;
void scale(double scalefactor,double &y,double &z);
int main(){
    double scalefactor,y,z;
    cout<<"The function converts dm to meter:"<<endl;
    cout<<"enter your scale factor:"<<endl;
    cin>>scalefactor;
    cout<<"enter your two values that needs to be scaled:"<<endl;
    cin>>y>>z;
    cout<<"Before scaling"<<" "<<y<<" "<<z<<endl;
    scale(scalefactor,y,z);
    cout<<"After scaling"<<" "<<y<<" "<<z<<endl;
}
void scale(double scalefactor,double &y,double &z){
    assert(scalefactor!=0);
       y= scalefactor*y;
       z=scalefactor*z;
       cout<<"the scaled values of y is: "<<y<<endl<<" the scaled values of z is: "<<z<<endl;
    }
