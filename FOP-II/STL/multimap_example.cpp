#include <iostream>
#include <map>
using namespace std;
int main(){
//declaring a mutimap with a key string and value also string
multimap<string, string>subjects;
subjects.insert(make_pair("helen","economics"));
subjects.insert(make_pair("mahlet","psychology"));
subjects.insert(make_pair("linda","philosophy"));
subjects.insert(make_pair("helen","philosophy"));
//print all associated subjects with helen
cout<< "the subjects helen learns: ";
    auto range = subjects.equal_range("helen");
    for (auto it = range.first; it != range.second; ++it) {
        cout<< it->second << ", ";
    }
    cout<<endl; 

}
