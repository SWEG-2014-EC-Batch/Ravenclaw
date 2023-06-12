#include <iostream>
using namespace std;
int main(){
    float grade;
    float Test;
    float Quiz;
    float Project;
    float Assignment;
    float Finalexam;
    first_entry:
        cout << "Enter your Test "<<endl;
        cin >> Test;
        if (Test>=0 && Test<=15){
        }
        else{
            cout << "invalid";
            goto first_entry;
        }

    second_entry:
        cout << "Enter your Quiz  "<<endl;
        cin >> Quiz;
         if (Quiz>=0 && Quiz<=5){

        }
        else{
            cout <<"invalid";
            goto second_entry;
        }


    Third_entry:
      cout << "Enter your Project "<<endl;
      cin >> Project;
        if (Project>=0 && Project<=20){

        }
        else{
            cout <<"invalid";
            goto Third_entry;
        }
   Fourth_entry:
      cout << "Enter your Assignment "<<endl;
      cin >> Assignment;
        if (Assignment>=0 && Assignment<=10){

        }
        else{
            cout <<"invalid";
            goto Fourth_entry;
        }
   Fifth_entry:
     cout << "Enter your Finalexam "<<endl;
     cin >> Finalexam;
        if (Finalexam>=0 && Finalexam<=50){

        }
        else{
            cout <<"invalid";
            goto Fifth_entry;
        }

        grade = Test + Quiz +Assignment+Project+Finalexam;
    cout << grade;
    if (grade >=90 && grade <= 100){
            cout << "A+";
            }
    else if(grade >=80){
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
