#include <iostream>
#include <ctype.h>
using namespace std;
int main(){
    char symbol;
    cout << "enter a symbol"<<endl;
    cin >> symbol;
    if (isdigit(symbol)){
           if(symbol%2 == 0){
               cout << symbol <<"is even digit"<<endl;
           }
           else{
            cout << symbol <<"is odd digit"<<endl;
           }
    }
    else if (isupper(symbol)){
        cout << symbol << "is an upper case";
           if (symbol == 'A'|| symbol=='E'|| symbol=='I'||symbol=='O'||symbol=='U'){
            cout << symbol <<"is vowel upper case";
           }
           else{
             cout << symbol <<"is consonant upper case";
           }
    }
     else if (islower(symbol)){
        cout << symbol << "is an lower case"<<endl;
        if (symbol == 'a'|| symbol=='e'|| symbol=='i'||symbol=='o'||symbol=='u'){
            cout << symbol <<"is vowel lower case"<<endl;
           }
           else{
             cout << symbol <<"is consonant lower case"<<endl;
           }
    }
    else{
        cout << symbol <<"is a special character";
    }
}
