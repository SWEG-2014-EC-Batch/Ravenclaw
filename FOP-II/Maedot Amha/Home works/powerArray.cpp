#include<iostream>
#include<cmath>

using namespace std;

double resistance[5]={16,27,39,56,81},current[5],power[5];
void currentFxn(double current[5],int size);
void powerFxn(double current[5],double resistance[5],int size);
void display(double power[5],double current[5],double resistance[5],int size );
void total 
double calcTotal;
int main(){
    currentFxn(current,5);
    powerFxn(current,resistance,5);
    display(power,current,resistance,5);
}
void currentFxn(double current[5],int size){
    for (int i=0 ; i < size ; i++){
        cout<< "enter the current"<< i+1<<": ";
        cin >> current[i];
    }
}
void powerFxn(double current[5],double resistance[5],int size){
    
    for (int i=0 ; i < size ; i++){
        power[i]= current[i]*pow(resistance[i],2);
    }
}
void display(double power[5],double current[5],double resistance[5],int size ){
    // powerFxn(current, resistance, 5);
    cout << "Resistance\t"<<"Current\t" << "Power"<<endl;
    for(int i = 0; i < 5; i++){
        
        cout << resistance[i]<<"\t\t" << current[i]<<"\t"<< power[i];

        cout<<endl;
    }
}