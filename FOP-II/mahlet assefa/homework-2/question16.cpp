#include<iostream>
using namespace std;
void inputnotion(int &hour,int &minute,char &meridian);
void converter(int hour,int minute);
void outcome(int hour,int minute,char meridian);
int hour,minute;
char meridian,repeat;
int main(){
    inputnotion(hour,minute,meridian);
    converter(hour,minute);
    do{
       cout<<"do you want to continue('y'/'n')"<<endl;
       cin>>repeat;
       inputnotion(hour,minute,meridian);
       converter(hour,minute);
    }
    while(repeat=='y');
}
void inputnotion(int &hour,int &minute,char &meridian){
    cout<<"enter the hour and minute: "<<endl;
    cin>>hour>>minute;
}
void converter(int hour,int minute){
    char meridian;
        if (hour < 12) {
            meridian = 'A';
        }
        else {
            hour = hour - 12;
            if (hour == 0) 
            {
                hour = 12;
            }
            meridian = 'P';
        }
        outcome(hour,minute,meridian);
       }
void outcome(int hour,int minute,char meridian){
        cout << "The time converted to 12 hour format is: " << hour << ":";
        cout << minute << " ";
        if (meridian == 'A') 
        {
            cout << "A.M." << endl;
        }
        else {
            cout << "P.M." << endl;
        }
}  
