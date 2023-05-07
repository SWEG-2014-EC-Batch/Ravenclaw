#include <iostream>
#include <string.h>

using namespace std;
int main() { 
    int n,i;
    char userName[100],password[100]={"paswword"},userNameP[100],passwordP[15]={"paswword"};
    cout << " enter user name";
    cin >> userName;
    cout << "enter your password" ;
    cin >> password;
    if (strlen(password)>15 || strlen (password)<6){
    cout << "invalid password";
    }for (int i =1; i<=n ; i++){
        if (!strcmpi (userName,userNameP[i])){
            cout<< " correct username";
            if (!strcmp(password,passwordP[i])){
                cout << " password is also correct";
            }else{cout<< " password incorect" ;
            } else {
                cout << " incorrect password";
            }
        }

    }
}