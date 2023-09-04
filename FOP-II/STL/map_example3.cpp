#include <iostream>
#include <map>
using namespace std;
int main() {
    // Declare a map with string keys and int values
    map<string, string> student_deparment;

    // Insert key-value pairs into the map
    student_deparment.insert(pair<string, string>("hanna", "softwareEngineering"));
    student_deparment.insert(make_pair("maedot", "chemicalEngineering"));
    student_deparment["fenet"] = "mechanicalEngineering";

    // Access and print values using the keys
    std::cout << "hanna's department: " << student_deparment["hanna"] <<endl;
    std::cout << "maedot's department: " << student_deparment.at("maedot") <<endl;
    std::cout << "fenet's department: " << student_deparment["fenet"] <<endl;

    return 0;
}
