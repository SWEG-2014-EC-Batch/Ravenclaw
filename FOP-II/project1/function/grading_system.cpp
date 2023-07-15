#include <iostream>
#include <string>

using namespace std;

const int MAX_STUDENTS = 150;
const int NUM_ANSWERS = 20;
const int NUM_FIELDS = 23;
const string DATABASE_TITLE[NUM_FIELDS] = {"Student ID", "Answer 1", "Answer 2", "Answer 3", "Answer 4", "Answer 5", "Answer 6", "Answer 7", "Answer 8", "Answer 9", "Answer 10", "Answer 11", "Answer 12", "Answer 13", "Answer 14", "Answer 15", "Answer 16", "Answer 17", "Answer 18", "Answer 19", "Answer 20", "Test Score", "Grade"};

void getCorrectAnswers(string correctAnswer[NUM_ANSWERS]);
void calculateStudentGrade(string correctAnswer[NUM_ANSWERS], string studentDatabase[][MAX_STUDENTS], int num, int i);
void displayTopStudents(string studentDatabase[][MAX_STUDENTS], int num);
void searchStudent(string studentDatabase[][MAX_STUDENTS], int num);
void displayStudentDatabase(string studentDatabase[][MAX_STUDENTS], int num);

int main() {
    string correctAnswer[NUM_ANSWERS];
    int num;
    string studentDatabase[NUM_FIELDS][MAX_STUDENTS];

    // Get the correct answers from the user
    getCorrectAnswers(correctAnswer);

    // Get the number of students
    cout << "Enter the amount of students: ";
    cin >> num;

    // Calculate grades for each student and store in the database
    for (int i = 0; i < num; i++) {
        cout << endl << "Enter student ID for student " << i + 1 << ": ";
        cin >> studentDatabase[0][i];
        calculateStudentGrade(correctAnswer, studentDatabase, num, i);
    }

    // Display the student database
    displayStudentDatabase(studentDatabase, num);// Function to display the student database
    // Display the top students
    displayTopStudents(studentDatabase, num);

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
void calculateStudentGrade(string correctAnswer[NUM_ANSWERS], string studentDatabase[][MAX_STUDENTS], int num, int i) {
    int testscore = 0;
    string fix;
    cout << "Enter the student answers for student " << i + 1 << endl;
    getline(cin, fix);
    for (int j = 1; j <= NUM_ANSWERS; j++) {
        cout << j << ": ";
        getline(cin, studentDatabase[j][i]);
        if (studentDatabase[j][i] == correctAnswer[j - 1]) {
            testscore += 2;
        } else if (studentDatabase[j][i] == "") {
            testscore += 0;
        } else if (studentDatabase[j][i] != correctAnswer[j - 1]) {
            testscore += 1;
        }
    }
    studentDatabase[21][i] = to_string(testscore);
    if (testscore < 41 && testscore >= 36 ) {
        studentDatabase[22][i] = "A";
    } else if (testscore < 36 && testscore >= 32) {
        studentDatabase[22][i] = "B";
    } else if (testscore < 32 && testscore >= 28) {
        studentDatabase[22][i] = "C";
    } else if (testscore < 28 && testscore >= 24) {
        studentDatabase[22][i] = "D";
    } else if  (testscore < 24) {
        studentDatabase[22][i] = "F";
    }
}

// Function to display the top students based on their test scores
void displayTopStudents(string studentDatabase[][MAX_STUDENTS], int num) {
    // Sort the students based on their test scores
    for (int i = 0; i < num; ++i) {
        for (int j = i + 1; j < num; ++j) {
            if (stoi(studentDatabase[21][i]) < stoi(studentDatabase[21][j])) {
                for (int k = 0; k < NUM_FIELDS; k++) {
                    swap(studentDatabase[k][i], studentDatabase[k][j]);
                }
            }
        }
    }
    // Display the top students
    int top = min(num, 5);
    cout << endl << "TOP " << top << " STUDENTS" << endl;
    for (int i = 0; i < top; ++i) {
        for (int j = 0; j < NUM_FIELDS; ++j) {
            cout << DATABASE_TITLE[j] << ": " << studentDatabase[j][i] << endl;
        }
        cout << endl;
    }
}

// Function to search for a student by ID
void searchStudent(string studentDatabase[][MAX_STUDENTS], int num) {
    string search;
    int found = 0;
    cout << endl << "SEARCH STUDENT" << endl;
    while (true) {
        cout << endl << "Search student ID (if you don't want to repeat say no with 'n'): ";
        cin >> search;
        if (search == "n") {
            break;
        }
        found = 0;
        for (int i = 0; i < num; i++) {
            if (search == studentDatabase[0][i]) {
                found = 1;
                for (int j = 0; j < NUM_FIELDS; j++) {
                    cout << DATABASE_TITLE[j] << ": " << studentDatabase[j][i] << "\t";
                }
                cout << endl;
            }
        }
        if (!found) {
            cout << "Student not found" << endl;
        }
    }
}
void displayStudentDatabase(string studentDatabase[][MAX_STUDENTS], int num) {
    cout << endl << "STUDENT GRADE DATABASE" << endl;
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < NUM_FIELDS; j++) {
            cout << DATABASE_TITLE[j] << ": " << studentDatabase[j][i] << endl;
        }
        cout << endl;
    }
}

