#include <iostream>
using namespace std;
void print_vowels(string mystring);

int main() {
    string input_mystring;

    cout << "Enter a string: ";
    getline(cin, input_mystring);

    cout << "Vowels in the string are: ";
    print_vowels(input_mystring);

    return 0;
}

void print_vowels(string mystring) {
    for (int i = 1; i <= mystring.length(); i++) {
        char ch = tolower(mystring[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " ";
        }
    }
}