#include <iostream>

int conversion (int hour, int minute);
int output (int convertedHour, int minute, char &timespan);
using namespace std;

int main() {
    int hour;
    int minute;
    cout << "24 HOUR NOTATION CONVERTER" << endl;
    cout << "input the hour: ";
    cin >> hour;
    cout << "input the minute: ";
    cin >> minute;
    conversion(hour, minute);
}
int conversion(int hour, int minute){
    char timespan;
    int convertedHour;
    if (hour < 12 && hour >= 0){
        convertedHour = hour;
    } else if (hour >= 12 && hour < 24){
        convertedHour = hour - 12;
    }
    if (hour < 12 && hour >= 00){
        timespan = 'A';
    } else if (hour >= 12 && hour < 24) {
        timespan = 'P';
    }
    output(convertedHour, minute, timespan);
}
int output(int convertedHour, int minute, char &timespan){
    if (timespan == 'P'){
        cout << "the converted time is " << convertedHour << ":" << minute << " PM";
    } else if (timespan == 'A'){
        cout << "the converted time is " << convertedHour << ":" << minute << " AM";
    }else {
        cout << "invalid input";
    }
}
