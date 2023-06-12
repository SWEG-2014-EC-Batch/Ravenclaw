#include <iostream>
#include <string.h>

using namespace std;
int main() { 
    char full_name[40],birth_date[7],city[40];
    cout << " enter your full name"<< endl;
    cin >> full_name;
    cout << " enter your birth date" << endl;
    cin >> birth_date;
    cout << " enter the city you were born in"<< endl;
    cin >> city;
    strcat(full_name,birth_date);
    strcat(full_name,city);
    cout << full_name;

}