#include <iostream>

using namespace std;

int main() {
    int size;
    int byte;
    float time;

    cout<<"Input the data size (in MB): ";
    cin>>size;
    byte = size * 1024 * 1024;
    time = byte / 960;
    // 960 characters are 960 bytes
    cout <<"it takes " <<time <<"seconds to transfer the data";

}
