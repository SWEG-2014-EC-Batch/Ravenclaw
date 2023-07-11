
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    double exam1;
    double exam2;
    double homework;
    double finalExam;
    double finalGrade;
    string letterGrade;
};

void calculateFinalGrade(Student& student) {
    student.finalGrade = 0.20 * student.exam1 + 0.20 * student.exam2 + 0.35 * student.homework + 0.25 * student.finalExam;

    if (100 >= student.finalGrade >= 90) {
        student.letterGrade = "A";
    } else if (student.finalGrade >= 80) {
        student.letterGrade = "B";
    } else if (student.finalGrade >= 70) {
        student.letterGrade = "C";
    } else if (student.finalGrade >= 60) {
        student.letterGrade = "D";
    } else {
        student.letterGrade = "F";
    }
}

int main() {
    const int MAX_STUDENTS = 20;
    Student students[MAX_STUDENTS];

    int numStudents;
    std::cout << "Enter the number of students (up to 20): ";
    std::cin >> numStudents;

    if (numStudents > MAX_STUDENTS) {
        std::cout << "Invalid input. Maximum number of students is " << MAX_STUDENTS << "." << std::endl;
        return 0;
    }

    std::ofstream outputFile("student_grades.txt");
    if (!outputFile) {
        std::cout << "Error opening output file." << std::endl;
        return 0;
    }

    for (int i = 0; i < numStudents; ++i) {
        std::cout << "Enter the information for Student " << i + 1 << ":" << std::endl;
        std::cout << "Name: ";
        std::cin.ignore();
        std::getline(std::cin, students[i].name);
        std::cout << "Exam 1: ";
        std::cin >> students[i].exam1;
        std::cout << "Exam 2: ";
        std::cin >> students[i].exam2;
        std::cout << "Homework: ";
        std::cin >> students[i].homework;
        std::cout << "Final Exam: ";
        std::cin >> students[i].finalExam;

        calculateFinalGrade(students[i]);

        // Writing to the file
        outputFile << "Name: " << students[i].name << std::endl;
        outputFile << "Final Grade: " << students[i].finalGrade << std::endl;
        outputFile << "Letter Grade: " << students[i].letterGrade << std::endl;
        outputFile << std::endl;
    }
    outputFile.close();

    std::cout << "Student grades have been written to the file: student_grades.txt" << std::endl;

    return 0;
}

