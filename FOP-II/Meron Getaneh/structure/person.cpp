#include<iostream>
#include<cmath>
using namespace std;
struct person{
    string name;
    char gender;
    int choice,age;
    double bmi,weight,height;
}person,persondata[5];

int main(){
    cout<<"for how many people do you want to do this\n";
    cin>>person.choice;
    if(person.choice==1){
    cout<<"enter your name\n";
    getline(cin,person.name);
    cin.ignore();
    cout<<"enter your age\n";
    cin>>person.age;
    cout<<"enter your gender\n";
    cin>>person.gender;
    cout<<"enter your weight\n";
    cin>>person.weight;
    cout<<"enter your height\n";
    cin>>person.height;
    cout<<person.name<<endl;
    person.bmi=person.weight/pow(person.height,2);
    cout<<"your bmi is:"<<person.bmi<<endl;
    }else if(){

    }
}
