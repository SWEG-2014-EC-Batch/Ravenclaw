#include <fstream>
#include <iostream>
using namespace std;
void write(const char* fname, int* list, int* count) {
    ifstream file(fname);
    int number;
    *count = 0; 

    if (file.is_open()) {
        while (file >> number) {
            list[*count] = number;
            (*count)++; 
        }
        file.close(); 
    }
}

int main() {
    const char* fname = "array.txt";
    int array[100]; // Assuming the array has enough space for all entries
    int count;

    write(fname, array, &count);

    // Print the results
    cout << "Number of entries: " << count << endl;
    cout << "Array elements: ";
    for (int i = 0; i < count; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}




