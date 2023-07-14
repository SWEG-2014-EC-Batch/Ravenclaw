
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student {
    string name;
    double exam1;
    double mid;
    double homework;
    double final;
    double mark;
    string grade;
};

void calcGrade(Student& student) {
    student.mark = 0.20 * student.exam1 + 0.20 * student.mid + 0.35 * student.homework + 0.25 * student.final;

    if (100 >= student.mark >= 90) {
        student.grade = "A";
    } else if (student.mark >= 80) {
        student.grade = "B";
    } else if (student.mark >= 70) {
        student.grade = "C";
    } else if (student.mark >= 60) {
        student.grade = "D";
    } else {
        student.grade = "F";
    }
}

int main() {
    const int MAX = 20;
    Student students[MAX];

    int numStudents;
    std::cout << "Enter the number of students (up to 20): ";
    std::cin >> numStudents;

    if (numStudents > MAX) {
        std::cout << "Invalid input. Maximum number of students is " << MAX << "." << std::endl;
        return 0;
    }

    std::ofstream output("student_grades.txt");
    if (!output) {
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
        std::cin >> students[i].mid;
        std::cout << "Homework: ";
        std::cin >> students[i].homework;
        std::cout << "Final Exam: ";
        std::cin >> students[i].final;

        calcGrade(students[i]);

        // Writing to the file
        output << "Name: " << students[i].name << std::endl;
        output << "Final Grade: " << students[i].mark << std::endl;
        output << "Letter Grade: " << students[i].grade << std::endl;
        output << std::endl;
    }
    output.close();

    std::cout << "Student grades have been written to the main folder"<< std::endl;

    return 0;
}

