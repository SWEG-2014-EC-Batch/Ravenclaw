#include<iostream>
using namespace std;
void inputs(int &menu,float &length);
void converstion(int menu,float length);
void output(float output);
int main(){
    float length;
    int menu;
inputs(menu,length);
converstion (menu,length);
}
void inputs(int &menu,float &length){
        cout << "1) Convert feets and inches to meters and centimeters And 2) To Convert centimeters and meters to feets and inches" << endl;
        cout << "Enter your choice:"<<endl;
        cin >> menu; 
        cout <<" Enter the number";
        cin >> length;
}
void converstion(int menu,float length){
    if (menu==1){
         length=length*0.3048;
    }if (menu==2){
        length = length / 0.3048;
    }
   output(length);

}
void output(float output){
    cout << "the result is "<< output;
}
