#include <iostream>
#include <cmath>

using namespace std;
int main() {
    char prompt;
    int menu;
    float height;
    float weight;
    char gender;
    float BMI;
    cout<< "MENU FOR BMI CALCULATION"<<endl;
    cout<< "1. for one person"<<endl;
    cout<< "2. for multiple people"<<endl;
    cout<< "3. for unknown amount" <<endl;
    cin>> menu;

    if (menu == 1) {
        cout << "Please enter gender:";
        cin >> gender;
        cout << "Please enter height:";
        cin >> height;
        cout << "Please enter weight:";
        cin >> weight;
        BMI = weight / pow(height, 2);
        if (gender == 'M') {
            if (BMI < 18.5) {
                cout << "you are an underweight male" << endl;
            } else if (BMI >= 18.5  BMI <= 25) {
                cout << "you are an average weight male" << endl;
            } else if (BMI > 25) {
                cout << "you are an overweight male" << endl;
            }
        } else if (gender == 'F') {
            if (BMI < 18.5) {
                cout << "you are an underweight female" << endl;
            } else if (BMI >= 18.5  BMI <= 25) {
                cout << "you are an average weight female" << endl;
            } else if (BMI > 25) {
                cout << "you are an overweight female" << endl;
            }
        }
    } else if (menu == 2) {
        int users;
        int i;
        cout << "enter the number of users: ";
        cin >> users;
        for (i = 1; i <= users; ++i) {
            cout << "Please enter gender:";
            cin >> gender;
            cout << "Please enter height:";
            cin >> height;
            cout << "Please enter weight:";
            cin >> weight;
            BMI = weight / pow(height, 2);
            if (gender == 'M') {
                if (BMI < 18.5) {
                    cout << "you are an underweight male" << endl;
                } else if (BMI >= 18.5  BMI <= 25) {
                    cout << "you are an average weight male" << endl;
                } else if (BMI > 25) {
                    cout << "you are an overweight male" << endl;
                }
            } else if (gender == 'F') {
                if (BMI < 18.5) {
                    cout << "you are an underweight female" << endl;
                } else if (BMI >= 18.5  BMI <= 25) {
                    cout << "you are an average weight female" << endl;
                } else if (BMI > 25) {
                    cout << "you are an overweight female" << endl;
                }
            }
        }
    } else if (menu == 3) {
            do  {
                cout << "Please enter gender:";
                cin >> gender;
                cout << "Please enter height:";
                cin >> height;
                cout << "Please enter weight:";
                cin >> weight;
                float BMI;
                BMI = weight / pow(height, 2);
                if (gender == 'M') {
                    if (BMI < 18.5) {
                        cout << "you are an underweight male" << endl;
                    } else if (BMI >= 18.5  BMI <= 25) {
                        cout << "you are an average weight male" << endl;
                    } else if (BMI > 25) {
                        cout << "you are an overweight male" << endl;
                    }
                } else if (gender == 'F') {
                    if (BMI < 18.5) {
                        cout << "you are an underweight female" << endl;
                    } else if (BMI >= 18.5  BMI <= 25) {
                        cout << "you are an average weight female" << endl;
                    } else if (BMI > 25) {
                        cout << "you are an overweight female" << endl;
                    }
                }
                cout<<"do you want to continue? type y for yes and n for no.\n";
                cin>>prompt;
            }
            while (prompt == 'y');
    }
}

