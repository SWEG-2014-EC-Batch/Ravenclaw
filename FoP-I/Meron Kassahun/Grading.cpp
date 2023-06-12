#include<iostream>
using namespace std;
int main()
{
  int i;
    float mark, sum=0, avg;
    cout<<"Enter Marks obtained in 5 Subjects: ";
    for(i=0; i<5; i++)
    {
        cin>>mark;
        sum = sum+mark;
    }
    avg = sum/5;
    cout<<"\nGrade = ";
    if(avg>=91 && avg<=100)
        cout<<"A+";
    else if(avg>=85 && avg<91)
        cout<<"A";
    else if(avg>=80 && avg<85)
        cout<<"A-";
    else if(avg>=75 && avg<80)
    cout<<"B+";
    else if(avg>=70 && avg<75)
    cout<<"B";
    else if(avg>=65 && avg<70)
    cout<<"c+";
    else if(avg>=60 && avg<65)
    cout<<"C";
    else if(avg>=33 && avg<41)
        cout<<"D";
 
    else
        cout<<"Invalid!";
    cout<<endl; 
    
}
