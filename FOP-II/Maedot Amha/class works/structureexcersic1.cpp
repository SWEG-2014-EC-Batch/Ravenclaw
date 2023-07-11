#include<iostream>
#include<cmath>
int sum=0;
using namespace std;
 
struct student{
    int iD ;
    string name ;
    int  testMark[2];
    int finalMark;
        }AAstuStudents[10];
 
int main (){

int menu;
cout << "How many students do you want to enter?";
cin >>menu;

    if ( menu>=1 && menu<=10){
    for (int j=0;j< menu;j++){
        cout << " enter the data of the student "<<j+1<<endl;
        cout<< "enter the Id of the student"<<endl; 
        cin >> AAstuStudents[j].iD ;
            
        cout<< "Enter the name of the student "<< endl;
        getline(cin,AAstuStudents[j].name);

           cout<<"enter the two text marks of the student"<<endl;
            for(int i=0;i<2;i++){
                cin>> AAstuStudents[j].testMark[i];
                sum = sum+AAstuStudents[j].testMark[i];
               }
                
     AAstuStudents[j].finalMark=sum;

            cout <<"ID :-" <<AAstuStudents[j].iD<<endl;
            cout << "name :-"<< AAstuStudents[j].name<<endl;
           
            for (int i=0;i<2;i++){
                cout <<" test "<<i+1<<" :- "<< AAstuStudents[j].testMark[i]<<endl;
            }
                    cout << "final mark :- "<<AAstuStudents[j].finalMark;
 }
    }else 
        cout << "invalid number of students";
 }