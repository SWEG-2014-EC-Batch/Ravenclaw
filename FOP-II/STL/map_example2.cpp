#include <iostream>
#include<map>
using namespace std;
int main() {
    // Declare a map with string keys and int values
    map<string, int> studentScores;

    // Insert key-value pairs into the map
    studentScores["hanna"] = 35;
    studentScores["maedot"] = 40;
    studentScores["fenet"] = 55;

    // Use iterator to access and print key-value pairs
    map<string, int>::iterator it;
    for (it = studentScores.begin(); it != studentScores.end(); ++it) {
        cout << "Name: " << it->first << ", Score: " << it->second <<endl;
    }

    return 0;
}
