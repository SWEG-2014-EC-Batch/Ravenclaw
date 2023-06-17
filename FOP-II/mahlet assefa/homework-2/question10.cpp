#include <iostream>
#include<cmath>
using namespace std;
    void inputChoice(int &choice);
    void inputfeetinches(double &length);
    void inputmeterscm(double &length);
    void convertTometerscm(double length);
    void converTofeetinches(double length);
    void outputfeetinches(double length);
    void outputmeterscm(double length);
    char repeat;
    double length,whole;
    int choice;
int main(){
    do {
        inputChoice(choice);      
            switch (choice) {
            case 1:
               inputfeetinches(length);
               convertTometerscm(length);
                break;
            case 2:
                inputmeterscm(length);
                converTofeetinches(length);
                break;
            }
            //repeat confirmation
            cout << "Do you want to continue? [y/n]: "<<endl;
            cin >> repeat;
        } 
        while (repeat == 'y');
        return 0;
}
void inputChoice(int &choice) {
        cout << "1) Convert feets and inches to meters and centimeters" << endl<< "2) Convert centimeters and meters to feets and inches" << endl;
        cout << "Enter your choice:"<<endl;
        cin >> choice;
    }
void inputfeetinches(double &length){
        cout << "\nEnter the lenght in feet with inches:";
        cin >> length;
    }
void inputmeterscm(double &length) 
    {
        cout << "\nEnter length in meters and centimeters:";
        cin >> length;
    }
void convertTometerscm(double length) 
    {
       length=length*0.3048;
       outputfeetinches(length);
    }
void converTofeetinches(double length){
       length=length/0.3048;
       outputmeterscm(length);
    }
void outputfeetinches(double length) 
    {
       double whole = floor(length);
       double decimal = length - whole;
       decimal=decimal*100;
       std::cin.get();
        cout << "\nThe converted lenth is "<<whole<< " meters and "<<decimal<<" centimeters."<<endl;
    }
void outputmeterscm(double length) {
       double whole = floor(length);
       double decimal = length - whole;
       decimal=decimal*10;
       std::cin.get();
        cout << "\nThe converted lenth is "<<whole<<"feet and"<<decimal<<" inches."<<endl;
    }