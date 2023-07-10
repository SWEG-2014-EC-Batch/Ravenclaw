#include<iostream>
using namespace std;
struct Student {
    int id;
    string name;
    float testMark;
    float finalMark;
};

void inputStudentData(Student &s) {
    cout << "Enter Student ID: ";
    cin >> s.id;
    cout << "Enter Student Name: ";
    cin.ignore();
    getline(cin, s.name);
    cout << "Enter Test Mark: ";
    cin >> s.testMark;
    cout << "Enter Final Mark: ";
    cin >> s.finalMark;
}

void computeSum(Student &s) {
    float sum = s.testMark + s.finalMark;
    cout << "Sum of Marks: " << sum << endl;
}

void printStudentRecord(const Student &s) {
    cout << "Student ID: " << s.id << endl;
    cout << "Student Name: " << s.name << endl;
    cout << "Test Mark: " << s.testMark << endl;
    cout << "Final Mark: " << s.finalMark << endl;
}

int main() {
    const int total_students = 10;
    Student students[total_students];

    // Input data for each student
    for (int i = 0; i < total_students; i++) {
        cout << "Enter details for Student " << i + 1 << ":" << endl;
        inputStudentData(students[i]);
        cout << endl;
    }

    // Compute and print the sum of marks for each student
    for (int i = 0; i < total_students; i++) {
        cout << "Sum of Marks for Student " << i + 1 << ": ";
        computeSum(students[i]);
        cout << endl;
    }

    // Print the records of each student
    cout << "Student Records:" << endl;
    for (int i = 0; i < total_students; i++) {
        cout << "Record for Student " << i + 1 << ":" << endl;
        printStudentRecord(students[i]);
        cout << endl;
    }

    return 0;
}