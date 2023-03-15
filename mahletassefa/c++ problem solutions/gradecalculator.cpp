#include <iostream>
using namespace std;
int main(){
    float grade;
    cout <<"enter your grade";
    cin >> grade;
    if (grade >=90 && grade <= 100){
            cout << "A+";
            }
    else if(100 >= grade && grade >=80){
            cout << "A";
            }
     else if(grade >=75){
            cout << "B+";
            }
     else if(grade >=60){
            cout << "B";
            }
    else if(grade >=55){
            cout << "c+";
            }
    else if(grade >=45){
            cout << "c";
            }
    else if(grade >=30){
            cout << "D";
            }

    else{
        cout <<"F";
        }
    }
