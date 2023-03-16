#include <iostream>

using namespace std;
int main() {
    float average;
    float test;
    float quiz;
    float assignment;
    float final;
    float project;

    first_input:
    cout<<"input first quiz (5%):";
    cin>> quiz;
    if (quiz > 5 || quiz < 0) {
        cout<<"Invalid input"<<endl;
        goto first_input;
    }
    second_input:
    cout<<"input test result (15%)";
    cin>> test;
    if (test > 15 || test < 0){
        cout<<"Invalid input"<<endl;
        goto second_input;
    }
    third_input:
    cout<<"input project result (20%)";
    cin>> project;
    if (project > 20 || quiz < 0){
        cout<<"Invalid input"<<endl;
        goto third_input;
    }
    fourth_input:
    cout<<"input assignment result (10%)";
    cin>> assignment;
    if (assignment > 10 || quiz < 0){
        cout<<"Invalid input"<<endl;
        goto fourth_input;
    }
    fifth_input:
    cout<<"input final exam result (50%)";
    cin>> final;
    if (final > 50 || final < 0){
        cout<<"Invalid input"<<endl;
        goto fifth_input;
    }
    average = test + quiz + assignment + final + project;

    if (average >= 90 && average <= 100) {
        cout<<"The grade is A+";
    } else if (average >= 80 && average < 90) {
        cout<<"The grade is A";
    } else if (average >= 75 && average < 80) {
        cout<<"The grade is B+";
    } else if (average >= 60 && average < 75) {
        cout<<"The grade is B";
    } else if (average >= 55 && average < 60) {
        cout<<"The grade is C+";
    } else if (average >= 45 && average < 55) {
        cout<<"The grade is C";
    } else if (average >= 30 && average < 45) {
        cout<<"The grade is D";
    } else if (average >= 0 && average < 30) {
        cout<<"The grade is F";
    } else {
        cout<<"Invalid input";
    }
}
