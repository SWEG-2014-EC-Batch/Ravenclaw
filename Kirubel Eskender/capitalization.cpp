#include <iostream>
#include <ctype.h>

using namespace std;

int main() {
    char input;

    cout << "enter a character";
    cin >> input;
    (input >= 'A' && input <= 'Z') ?
             cout << "the small letter is " << (char) tolower(input):
             cout << "the capital letter is " << (char) toupper(input);
}