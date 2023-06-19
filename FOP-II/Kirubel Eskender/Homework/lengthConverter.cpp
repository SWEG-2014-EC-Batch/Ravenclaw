#include <iostream>

float calculate(int menu, float inputLength);
float output(int result, float inputLength);


using namespace std;
int main() {
    char top;
    int menu;
    float inputLength;
    top:
    cout << "LENGTH CONVERTER" << endl;
    cout << "1. meter & centimeter to feet & inches" << endl;
    cout << "2. feet & inches to meter & centimeter" << endl;
    cin >> menu;
    switch(menu){
        case 1:
            cout << "input length in meters: ";
            cin >> inputLength;
            cout << endl;
            calculate(menu, inputLength);
            cout << endl << "do you want to continue? press y to calculate another length: ";
            cin >> top;
            if(top == 'y'){
                goto top;
            }
            break;
        case 2:
            cout << "input length in feet: ";
            cin >> inputLength;
            cout << endl;
            calculate(menu, inputLength);
            cout << endl << "do you want to continue? press y to calculate another length: ";
            cin >> top;
            if(top == 'y'){
                goto top;
            }
            break;
        default:
            cout << "error! try again." << endl;
            goto top;
    }
}
float calculate(int menu, float inputLength){
    float resultLength;
    switch (menu) {
        case 1:
            resultLength = inputLength / 0.3048;
            break;
        case 2:
            resultLength = inputLength * 0.3048;
            break;
    }
    output(menu, resultLength);
}
float output(int result, float inputLength){
     switch(result) {
        case 1:
            cout << "The result is " << inputLength << " feet.";
            break;
        case 2:
            cout << "The result is " << inputLength << " meters.";
            break;
    }
}
