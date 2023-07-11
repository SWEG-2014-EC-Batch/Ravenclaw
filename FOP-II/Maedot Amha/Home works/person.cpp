#include<iostream>
#include<cmath>
using namespace std;
struct person{
    string name;
    char gender;
    int age;
    double weight,height;
}person;
double bmi(double weight,double height){
    double bmi=person.weight/pow(person.height,2);
    cout<<"your bmi is:"<<bmi;
}
int main(){
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
    bmi(person.weight,person.height);
    }