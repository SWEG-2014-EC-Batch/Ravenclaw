#include<iostream>
#include<cmath>
using namespace std;
double windchillfactor(double speed,double temp);
double speed,temp,windchilleffect;
int main(){
    windchillfactor(speed,temp);
}
double windchillfactor(double speed,double temp){
    cout<<"enter the wind speed in m/sec"<<endl;
    cin>>speed;
    cout<<"enter the temprature in degree celsius"<<endl;
    cin>>temp;
    if(temp<=10){
       windchilleffect=13.12+(0.6215*temp)-(11.37*pow(speed,0.16))+(0.3965*temp*pow(speed,0.16));
       cout<<"The measure of the chilling effect of wind at "<<temp<<" degree celsius is: "<<windchilleffect<<" degree celsius";
    }
    else{
        return 0;
    }
    
}
