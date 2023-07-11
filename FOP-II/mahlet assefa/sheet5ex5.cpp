#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream file("sheet5ex5.cpp");
    char ch;
    int count[26] = {0};  
    int index;

    while (file  >> ch) {
        if (islower(ch)) {
            index = ch - 'a';  
            count[index]++;
        }
    }

    file.close();

    for (int i = 0; i < 26; i++) {
        cout << static_cast<char>('a' + i) << ": " << count[i] << endl;
    }

    return 0;
}

