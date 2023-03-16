#include <iostream>
#include <ctype.h>

using namespace std;
int main() {
    char symbol;

    cout<<"input a character:";
    cin >> symbol;

    if (islower(symbol)){
        if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u') {
            cout << "The symbol " << symbol << " is lowercase vowel.";
        } else {
            cout << "The symbol " << symbol << " is lowercase consonant.";
        }
    } else if (isupper(symbol)){
        if (symbol == 'a' || symbol == 'e' || symbol == 'i' || symbol == 'o' || symbol == 'u') {
            cout << "The symbol " << symbol << " is uppercase vowel.";
        } else {
            cout << "The symbol " << symbol << " is uppercase vowel.";
        }
    } else if (isdigit(symbol) && symbol % 2 == 0){
        cout << "The symbol " << symbol << " is an even digit";
    } else if (isdigit(symbol) && symbol % 2 != 0) {
        cout << "The symbol " << symbol << " is an odd digit";
    } else {
        cout << "The symbol " << symbol << " is a punctuation";
    }
    return 0;

}
