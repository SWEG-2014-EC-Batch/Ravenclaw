#include <fstream>
#include <iostream>
using namespace std;
void readFileIntoArray(const char* filename, int* array, int* count) {
    ifstream file(filename); 
    int number;
    *count = 0; 

    if (file.is_open()) {
        while (file >> number) {
            array[*count] = number;
            (*count)++; 
        }
        file.close(); 
    }
}

int main() {
    const char* filename = "data.txt";
    int array[100]; // Assuming the array has enough space for all entries
    int count;

    readFileIntoArray(filename, array, &count);

    // Print the results
    cout << "Number of entries: " << count << endl;
    cout << "Array elements: ";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}




