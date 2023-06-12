#include<iostream>
using namespace std;
int main()
{
    float gross salary,income tax rate,over time,net pay;
    int work hours;
    cout<<"enter gross salary:";
    cin>>gross salary;
    cout<<"enter income tax rate:";
    cin>>income tax rate;
    cout<<"enter work hours:";
    cin>>work hours;
    if (work hours>40){
        cout<<"enter your over time:";
        cin>>over time;
        net pay=gross salary-(gross salary*(income tax rate/100+0.07))+(work hours-(40*overtime);
        
    }else{
        net pay=gross salary-(gross salary*income tax rate/100)-(gross salary*0.07)
    }cout<<"net pay is"<<net pay ;
    
  }  
