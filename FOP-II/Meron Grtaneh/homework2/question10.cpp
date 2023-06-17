#include<iostream>
using namespace std;
//for input
void getLength(float &feet, float &inches) {
    cout << "Enter length in feet and inches: ";
    cin >> feet >> inches;
}
//for calculation
void calculatelength(float &feet, float &inches,float &meters, float &centimeters){
    float totalfeet=feet+(inches/12);
     meters=totalfeet*0.3048;
     centimeters=meters*100;
}
//for output
void printlength(float &feet, float &inches,float &meters, float &centimeters){
    cout<<"the length in meters is"<<" "<<meters<<endl;
    cout<<"the length in centimeters is"<<" "<<centimeters<<endl;
}
int main(){
    string choice;
     do {
        float feet, inches, meters, centimeters;
        getLength(feet, inches);
        calculatelength(feet, inches, meters, centimeters);
        printlength(feet, inches, meters, centimeters);
        cout << "do you want to convert another length?\n ";
        cin >> choice;
    }while (choice == "yes" || choice == "Yes");
    return 0;

}
