#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("data.txt"); 

    if (!inputFile.is_open()) {
        cout << "couldn't open the file." << endl;
        return 1;
    }

    int groupSize;
    while(inputFile >> groupSize) {
        int sum = 0;
        int num;
        for (int i = 0; i < groupSize; i++) {
            inputFile >> num;
            sum += num;
        }
        float average = static_cast<float>(sum) / groupSize;
        cout << "Average of group with " << groupSize << " numbers: " << average << endl;
    }

    inputFile.close();
    return 0;
}
