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

void registerPatient() {
        // Get patient details from user input
        Patient patient;
        cout << "Enter patient name: ";
        cin.ignore();
        getline(cin, patient.name);
        cout << "Enter patient sex: ";
        getline(cin, patient.sex);
        cout << "Enter patient weight in kgs: ";
        cin >> patient.weight;
        cout << "Enter patient height in cms: ";
        cin >> patient.height;
        cout << "Enter patient history: ";
        cin.ignore();
        getline(cin, patient.history);
        cout << "Enter 1 for in-patient and 2 for out-patient: ";
        cin >> patient.type;
        if (patient.type == 1) {
            cout << "Enter number of days the patient is gonna stay at the hospital: ";
            cin >> patient.numberOfDaysStayed;
            patient.dateOfAppointment = "None";
            patient.serviceDetails = "Nursing";
        } else {
            cout << "Enter the day of the appointment: ";
            cin >> patient.dateOfAppointment;
            cout << "Enter what kind of services are required: ";
            cin.ignore();
            getline(cin, patient.serviceDetails);
            patient.numberOfDaysStayed = 0;
        }
        cin.ignore();
        cout << patients.size();
        // Add patient to records
        patients.push_back(patient);
        fstream newfile;
        newfile.open("patientData.txt", ios::out);  // open a file to perform write operation using file object
        if (newfile.is_open()) {//checking whether the file is open {
            for (int i = 0; i < patients.size(); i++) {
                newfile << patients[i].name + "\n";
                newfile << patients[i].sex + "\n";
                newfile << patients[i].weight << endl;
                newfile << patients[i].height << endl;
                newfile << patients[i].history << endl;
                newfile << patients[i].serviceDetails << endl;
                newfile << patients[i].type << endl;
                newfile << patients[i].numberOfDaysStayed << endl;
                newfile << patients[i].dateOfAppointment << endl;


            }
            //inserting text
            newfile.close(); //close the file object
        }
    }
