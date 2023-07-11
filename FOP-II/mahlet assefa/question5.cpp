#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("averagenum.txt"); 

    if (!inputFile.is_open()) {
        cout << "Failed to open file." << endl;
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
        double average = static_cast<double>(sum) / groupSize;
        cout << "Average of group with " << groupSize << " numbers: " << average << endl;
    }

    inputFile.close();
    return 0;
}

