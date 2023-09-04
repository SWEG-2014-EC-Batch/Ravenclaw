#include <iostream>
#include <map>
using namespace std;
int main() {
    // Declare a map with int keys and string values
    map<int, string> studentNames;

    // Insert key-value pairs into the map
    studentNames[1000] = "mahlet";
    studentNames[1043] = "meron";
    studentNames[1091] = "maedot";

    // Access and print values using the keys
    cout << "Employee 1043: " << studentNames[1043] <<endl;

    return 0;
}
