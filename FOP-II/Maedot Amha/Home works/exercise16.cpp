#include <iostream>
using namespace std;
void input(int &hour,int &minute);
void converter(int hour,int minute);
void output (int hour,int minute,char timeZone);
int main(){ char again;
    do{
    int hour, minute;
    input(hour,minute);
    converter(hour, minute);
    cout << " do you want to repeat the proccess(Y /N)"<<endl;
    cin>> again;
    }
    while( again =='Y');
}
void input(int &hour,int &minute){
    cout<< "Enter the hours and minute to be converted:-";
    cin>> hour>>minute;
}
void converter(int hour,int minute){
    char timeZone;
    if (hour < 12 && hour >= 0){
        timeZone ='A';
    }else if(hour >= 12 && hour < 24) {
        hour-=12;
        timeZone='P';
    }
    output(hour,minute,timeZone);
}void output (int hour,int minute,char timeZone){
    cout << hour <<":"<<minute << " "<<timeZone;
}