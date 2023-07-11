#include <iostream>
#include <fstream>

using namespace std;

int readFile(char *filename, int array[], int *count) {
    // Open the file
    ifstream file(filename);

    // Check if the file opened successfully
    if (!file) {
        cout << "Error opening file" << endl;
        return -1;
    }

    // Read the file into the array
    int i = 0;
    while (file >> array[i]) {
        i++;
    }

    // Close the file
    file.close();

    // Update the count
    *count = i;

    return 0;
}

int main() {
    
    char filename[] = "numbers.txt";

    int array[100];

    int count = 0;

    int result = readFile(filename, array, &count);

    if (result == -1) {
        cout << "Error reading file" << endl;
        return 1;
    }
    for (int i = 0; i < count; i++) {
        cout << array[i] << endl;
    }
    return 0;
}


