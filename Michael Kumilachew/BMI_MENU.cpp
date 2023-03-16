#include <iostream>
using namespace std;

int main(){
    short int num_people;
    float height;
    float weight;
    char gender;
    float BMI;
    char condit;
    char type;
    

   
    cout << "What type is it: \n a, one person \n b,n number of people \n c,unknown ppl" << endl;
    cout << "Enter type: ";
    cin >> type;

    switch (type) {
        case 'a': 
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
                } else if (BMI >= 18.5 && BMI <= 25) {
                    cout << "you are an average weight male" << endl;
                } else if (BMI > 25) {
                    cout << "you are an overweight male" << endl;
                }
            } else if (gender == 'F') {
                if (BMI < 18.5) {
                    cout << "you are an underweight female" << endl;
                } else if (BMI >= 18.5 && BMI <= 25) {
                    cout << "you are an average weight female" << endl;
                } else if (BMI > 25) {
                    cout << "you are an overweight female" << endl;
                }
            }
            break;
        case 'b':
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
                    } else if (BMI >= 18.5 && BMI <= 25) {
                        cout << "you are an average weight male" << endl;
                    } else if (BMI > 25) {
                        cout << "you are an overweight male" << endl;
                    }
                } else if (gender == 'F') {
                    if (BMI < 18.5) {
                        cout << "you are an underweight female" << endl;
                    } else if (BMI >= 18.5 && BMI <= 25) {
                        cout << "you are an average weight female" << endl;
                    } else if (BMI > 25) {
                        cout << "you are an overweight female" << endl;
                    }
                }
            }
            break;
        case 'c': 
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
                    } else if (BMI >= 18.5 && BMI <= 25) {
                        cout << "you are an average weight male" << endl;
                    } else if (BMI > 25) {
                        cout << "you are an overweight male" << endl;
                    }
                } else if (gender == 'F') {
                    if (BMI < 18.5) {
                        cout << "you are an underweight female" << endl;
                    } else if (BMI >= 18.5 && BMI <= 25) {
                        cout << "you are an average weight female" << endl;
                    } else if (BMI > 25) {
                        cout << "you are an overweight female" << endl;
                    }
                }
                cout<<"do you want to continue? type y for yes and n for no.\n";
                cin>>condit;
            }
            while (condit == 'y');
    }
}