#include <iostream>
using namespace std;

int main(){
    float grade;
    float test;
    float quiz;
    float project;
    float assignment;
    float final_exam;
    int errors = 0;

    while(errors < 3){

        cout << "Enter your test grade(out of 15%): ";
        cin >> test;

        if(test < 0 || test > 15){
            errors ++;
            cout << "Invalid input, Please enter a number between 0 and 15 \n";
        }else {
            break;
        }
    }
    if (errors >= 3) {
        cout << "Too many errors, Exiting program \n";
    }
    
    while(errors < 3){

        cout << "Enter your quiz grade(out of 5%): ";
        cin >> quiz;

        if(quiz < 0 || quiz > 5){
            errors ++;
            cout << "Invalid input, Please enter a number between 0 and 5 \n";
        }else {
            break;
        }
    }
    if (errors >= 3) {
        cout << "Too many errors, Exiting program \n";
    }
    
    while(errors < 3){

        cout << "Enter your project grade(out of 20%): ";
        cin >> project;

        if(project < 0 || project > 20){
            errors ++;
            cout << "Invalid input, Please enter a number between 0 and 20 \n";
        }else {
            break;
        }
    }
    if (errors >= 3) {
        cout << "Too many errors, Exiting program \n";
    }

    

    while(errors < 3){

        cout << "Enter your assignment grade (out of 10%): ";
        cin >> assignment;

        if(assignment < 0 || assignment > 10){
            errors ++;
            cout << "Invalid input, Please enter a number between 0 and 10 \n";
        }else {
            break;
        }
    }
    if (errors >= 3) {
        cout << "Too many errors, Exiting program \n";
    }

    

    while(errors < 3){

        cout << "Enter your final exam grade (out of 50%): ";
        cin >> final_exam;

        if(final_exam < 0 || final_exam > 50){
            errors ++;
            cout << "Invalid input, Please enter a number between 0 and 50 \n";
        }else {
            break;
        }
    }
    if (errors >= 3) {
        cout << "Too many errors, Exiting program \n";
    }    

    grade = test + quiz + project + assignment + final_exam;
    cout << "Your total grade is " << grade << endl;

    if(grade >=90 && grade <=100){
        cout << "Your grade is A+";
    }else if(grade>=80 && grade <90){ 
        cout << "Your grade is A";
    }else if(grade>=75 && grade <80){
        cout << "Your grade is B+";
    }else if(grade>=60 && grade <75){
        cout << "Your grade is B";
    }else if(grade>=55 && grade <60){
        cout << "Your grade is C+";
    }else if(grade>=45 && grade <55){
        cout << "Your grade is C";
    }else if(grade>=30 && grade <45){
        cout << "Your grade is D";
    }else if(grade >0 && grade <30){
        cout << "Your grade is F";
    }else{
        cout << "Invalid Input";
    }
}