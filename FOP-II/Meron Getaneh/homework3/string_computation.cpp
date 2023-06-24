#include<iostream>
#include"user_defined_header_file.h"
using namespace std;
//a
void count_vowels_consonants() {
     string mystring;
     cout << "Enter a string: ";
     cin >> mystring;
    int vowels = 0, consonants = 0;
    for(int i=0; mystring[i]!='\0'; i++) {
        if(mystring[i]=='a' || mystring[i]=='e' || mystring[i]=='i' || mystring[i]=='o' || mystring[i]=='u' || 
        mystring[i]=='A' || mystring[i]=='E' || mystring[i]=='I' || mystring[i]=='O' || mystring[i]=='U') {
            vowels++;
        }
        else if((mystring[i]>='a' && mystring[i]<='z') || (mystring[i]>='A'&&mystring[i]<='Z')) {
            consonants++;
        }
    }
    cout << "Length of string: " << mystring.length() << endl;
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;
}
//b
string reverse_string() {
    string mystring;
    cout << "Enter a string: ";
    cin>>mystring;
    int j = mystring.length();
    string reversed_string = "";
    for(int i=j-1; i>=0; i--) {
     reversed_string += mystring[i];
    }
    cout<< reversed_string;
}
//c
int compare_strings() {
    string string1,string2;
    cout << "Enter the first string: ";
    cin>>string1;
    cout << "Enter the second string: ";
    cin>>string2;
    int j1 = string1.length();
    int j2 = string2.length();
    if(j1==j2){
     return 0;
    }else if(j1>j2){
     return 1;
    }else{
     return -1;
    }
}
//d
string to_uppercase() {
    string mystring;
    cout<<"enter your string\n";
    cin>>mystring;
    int j = mystring.length();
    string upper_string = "";
    for(int i=0; i<j; i++) {
        if(mystring[i]>='a' && mystring[i]<='z') {
            upper_string += (char)(mystring[i]-'a'+'A');
        } else {
            upper_string += mystring[i];
        }
    }
    cout<<upper_string;
}
//e
string to_lowercase( ) {
    string mystring;
    cout<<"enter the string:";
    cin>> mystring;
    int n = mystring.length();
    string lower_string = "";
    for(int i=0; i<n; i++) {
        if(mystring[i]>='A' && mystring[i]<='Z') {
            lower_string += (char)(mystring[i]-'A'+'a');
        } else {
            lower_string += mystring[i];
        }
    }
    cout<<lower_string;
}
int main(){
    char choice;
    cout<<"which operation do you want to do\n";
    cout<<"a,to find length of the string and its total vowels and consonants\n";
    cout<<"b,to reverse a string\n";
    cout<<"c, to compare two strings\n";
    cout<<"d,to convert a string to uppercase\n";
    cout<<"e,to convert a string to lowercase\n";
    cin>>choice;
    switch(choice){
        case 'a':
        count_vowels_consonants();
        break;
        case 'b':
        reverse_string() ;
        break;
        case 'c':
        cout<<compare_strings();
        break;
        case'd':
        to_uppercase();
        break;
        case'e':
        to_lowercase();
        break;
    }
    return 0;
}