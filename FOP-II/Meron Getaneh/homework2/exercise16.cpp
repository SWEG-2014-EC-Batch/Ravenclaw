#include <iostream>
using namespace std;
//get time from user
void gettime(int &hour, int &minute){
    cout << "Enter the hour in 24-hour notation: ";
    cin >> hour;
    cout << "Enter the minute: ";
    cin >> minute;
}
//convert the time
void changetime(int &hour, int &minute, char &AmPm){
    if (hour >= 12) {
        AmPm = 'P';
    } else {
        AmPm = 'A';
    }
    if (hour == 0) {
        hour = 12;
    } else if (hour > 12) {
        hour -= 12;
    }
}
//print the time
void printtime(int &hour, int &minute, char &AmPm){
    cout << "The time in 12-hour notation is: " << hour << ":" << minute << " " << AmPm <<endl;
}

int main() {
    int hour, minute;
    char AmPm;
    string choice;
    // loop to continue converting till the user stops it
    do{
        gettime(hour, minute);
        changetime(hour, minute, AmPm);
        printtime(hour, minute, AmPm);
        
        cout << "Do you want to try again? (Enter 'Yes' or 'No'): ";
        cin >> choice; // prompt the user to enter their desired choice

    }while(choice == "Yes" || choice == "yes"); 
    return 0;
}
