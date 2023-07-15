#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int MAX_STUDENTS = 150;
const int NUM_ANSWERS = 20;
const int NUM_FIELDS = 23;
const string DATABASE_TITLE[NUM_FIELDS] = {"Student ID", "Answer 1", "Answer 2", "Answer 3", "Answer 4", "Answer 5", "Answer 6", "Answer 7", "Answer 8", "Answer 9", "Answer 10", "Answer 11", "Answer 12", "Answer 13", "Answer 14", "Answer 15", "Answer 16", "Answer 17", "Answer 18", "Answer 19", "Answer 20", "Test Score", "Grade"};

struct Student {
    string id;
    string answers[NUM_ANSWERS];
    int score;
    string grade;
};

void getCorrectAnswers(string correctAnswer[NUM_ANSWERS]);
void calculateStudentGrade(string correctAnswer[NUM_ANSWERS], Student& student);
void displayTopStudents(Student studentDatabase[], int num);
void searchStudent(Student studentDatabase[], int num);
void displayStudentDatabase(Student studentDatabase[], int num);

int main() {
    string correctAnswer[NUM_ANSWERS];
    int num;
    Student studentDatabase[MAX_STUDENTS];

    // Get the correct answers from the user
    getCorrectAnswers(correctAnswer);

    // Get the number of students
    cout << "Enter the number of students: ";
    cin >> num;

    // Calculate grades for each student and store in the database
    int numStudentsWithScore = 0;
    for (int i = 0; i < num; i++) {
        cout << endl << "Enter student ID for student " << i + 1 << ": ";
        cin >> studentDatabase[i].id;
        calculateStudentGrade(correctAnswer, studentDatabase[i]);
        if (studentDatabase[i].score > 0) {
            numStudentsWithScore++;
        }
    }

    // Display the student database
    displayStudentDatabase(studentDatabase, num);

    // Display the top students
    displayTopStudents(studentDatabase, numStudentsWithScore);

    // Search for a student by ID
    searchStudent(studentDatabase, num);

    return 0;
}

// Function to get the correct test answers from the user
void getCorrectAnswers(string correctAnswer[NUM_ANSWERS]) {
    cout << "Enter the correct test answers in correct order" << endl;
    for (int i = 0; i < NUM_ANSWERS; i++) {
        cout << i + 1 << ": ";
        getline(cin, correctAnswer[i]);
    }
}

// Function to calculate the test score and grade for a single student
void calculateStudentGrade(string correctAnswer[NUM_ANSWERS], Student& student) {
    int testscore = 0;
    string fix;
    cout << "Enter the student answers for student " << student.id << endl;
    getline(cin, fix);
    for (int j = 0; j < NUM_ANSWERS; j++) {
        cout << j + 1 << ": ";
        getline(cin, student.answers[j]);
        if (student.answers[j] == correctAnswer[j]) {
            testscore += 2;
        } else if (student.answers[j] == "") {
            testscore += 0;
        } else if (student.answers[j] != correctAnswer[j]) {
            testscore += 1;
    }
    student.score = testscore;
    if (testscore < 41 && testscore >= 36 )  {
        student.grade = "A";
    } else if (testscore < 36 && testscore >= 32) {
        student.grade = "B";
    } else if (testscore < 32 && testscore >= 28){
        student.grade = "C";
    } else if (testscore < 28 && testscore >= 24) {
        student.grade = "D";
    } else if (testscore < 24) {
        student.grade = "F";
    }
}
}
// Function to display the top students based on their test scores
void displayTopStudents(Student studentDatabase[], int num) {
    // Sort the students based on their test scores
    sort(studentDatabase, studentDatabase + num, [](const Student& a, const Student& b) {
        return a.score > b.score;
    });

    // Display the top students
    int top = min(num, count_if(studentDatabase, studentDatabase + num, [](const Student& s) { return s.score > 0; }));
    cout << endl << "TOP " << top << " STUDENTS" << endl;
    for (int i = 0; i < top; ++i) {
        cout << DATABASE_TITLE[0] << ": " << studentDatabase[i].id << endl;
        for (int j = 0; j < NUM_ANSWERS; ++j) {
            cout << DATABASE_TITLE[j+1] << ": " << studentDatabase[i].answers[j] << endl;
        }
        cout << DATABASE_TITLE[NUM_FIELDS-2] << ": " << studentDatabase[i].score << endl;
        cout << DATABASE_TITLE[NUM_FIELDS-1] << ": " << studentDatabase[i].grade << endl;
        cout << endl;
    }
}

// Function to search for a student by ID
void searchStudent(Student studentDatabase[], int num) {
    string id;
    cout << "Enter student ID to search for: ";
    cin >> id;

    for (int i = 0; i < num; ++i) {
        if (studentDatabase[i].id == id) {
            cout << endl << "STUDENT FOUND" << endl;
            cout << DATABASE_TITLE[0] << ": " << studentDatabase[i].id << endl;
            for (int j = 0; j < NUM_ANSWERS; ++j) {
                cout << DATABASE_TITLE[j+1] << ": " << studentDatabase[i].answers[j] << endl;
            }
            cout << DATABASE_TITLE[NUM_FIELDS-2] << ": " << studentDatabase[i].score << endl;
            cout << DATABASE_TITLE[NUM_FIELDS-1] << ": " << studentDatabase[i].grade << endl;
            return;
        }
    }

    cout << endl << "STUDENT NOT FOUND" << endl;
}

// Function to display the entire student database
void displayStudentDatabase(Student studentDatabase[], int num) {
    cout << endl << "STUDENT DATABASE" << endl;
    for (int i = 0; i < num; ++i) {
        cout << DATABASE_TITLE[0] << ": " << studentDatabase[i].id << endl;
        for (int j = 0; j < NUM_ANSWERS; ++j) {
            cout << DATABASE_TITLE[j+1] << ": " << studentDatabase[i].answers[j] << endl;
        }
        cout << DATABASE_TITLE[NUM_FIELDS-2] << ": " << studentDatabase[i].score << endl;
        cout << DATABASE_TITLE[NUM_FIELDS-1] << ": " << studentDatabase[i].grade << endl;
        cout << endl;
    }
}
