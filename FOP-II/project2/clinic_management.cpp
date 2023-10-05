#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#define  MAXBEDS 100
#include <bits/stdc++.h>

using namespace std;

// Structure to hold patient details
struct Patient {
    string name;
    string dateOfBirth;
    string sex;
    string history;
    string serviceDetails;
    double weight;
    double height;
    int type;
    string dateOfAppointment;
    int numberOfDaysStayed;
    // Add more relevant fields as needed
};


// Function to calculate BMI
double calculateBMI(double weight, double height) {
    // Calculate BMI using weight and height
    double bmi = weight / ((height/100) * (height/100));
    return bmi;
}

// Class for managing patient records
class PatientRecords {
private:
    vector<Patient> patients;

public:
    // function to read all the data from file when program is launched
    void readData() {
        patients.clear();
        fstream newfile;
        newfile.open("patientData.txt", ios::in);
        if (newfile.is_open()) { //checking whether the file is open
            string tp;
            while (!newfile.eof()) {

                Patient p;
                getline(newfile, tp);
                if (tp == "") {
                    break;
                }
                p.name = tp;
                getline(newfile, tp);
                p.sex = tp;
                getline(newfile, tp);
                p.weight = stod(tp);
                getline(newfile, tp);
                p.height = stod(tp);
                getline(newfile, tp);
                p.history = tp;
                getline(newfile, tp);
                p.serviceDetails = tp;
                getline(newfile, tp);
                p.type = stoi(tp);
                getline(newfile, tp);
                p.numberOfDaysStayed = stoi(tp);
                getline(newfile, tp);
                p.dateOfAppointment = tp;
                patients.push_back(p);
            }
        }
        newfile.close(); //close the file object.

    }

