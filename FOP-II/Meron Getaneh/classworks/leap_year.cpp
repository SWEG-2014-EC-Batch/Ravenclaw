#include<iostream>
using namespace std;
int yearlist();
bool isleapyear(int year);
int main()
{
    int year= yearlist();
    if (isleapyear(year)){
        cout<<"it's a leap year\n";
    }else{
        cout<<"it's not a leap year\n";
    }
    return 0;
}   

int yearlist(){
    int year;
    cout<<"enter the year";
    cin>>year;
    return year;
}
bool isLeapYear(int year) { 
    if (year % 4 == 0) { 
        if (year % 100 == 0) { 
            if (year % 400 == 0) { 
                return true; 
            } else { 
                return false; 
            } 
        } else { 
            return true; 
        } 
    } else { 
        return false; 
    } 
} 
