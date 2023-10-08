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

 // Function to display patient records
    void displayRecords() {
        string name;
        cout << "Enter name of patient you want to display: ";
        getline(cin, name);
        for(int i = 0 ; i < patients.size() ; i++)
        {
            if (name == patients[i].name){
            cout <<endl<< "Name:" << patients[i].name<<endl;
            cout << "Sex:" << patients[i].sex<<endl;
            cout << "Weight:" << patients[i].weight<<endl;
            cout << "Height:" << patients[i].height<<endl;
            cout << "BMI:" << calculateBMI(patients[i].weight, patients[i].height)<<endl;
            cout << "Weight Level:";
            if (patients[i].sex == "male" || patients[i].sex == "Male"){
                    if (calculateBMI(patients[i].weight, patients[i].height) <= 18.5){
                        cout<< "underweight";
                    } else if (calculateBMI(patients[i].weight, patients[i].height) > 18.5 && calculateBMI(patients[i].weight, patients[i].height) <= 24.9){
                        cout<< "normal weight";
                    } else if (calculateBMI(patients[i].weight, patients[i].height) > 24.9 && calculateBMI(patients[i].weight, patients[i].height) <= 29.9){
                        cout<< "overweight";
                    } else if (calculateBMI(patients[i].weight, patients[i].height) >= 30){
                        cout << "obese";
                    }
                } else if (patients[i].sex == "female" || patients[i].sex == "Female"){
                    if (calculateBMI(patients[i].weight, patients[i].height) <= 20){
                        cout<< "underweight";
                    } else if (calculateBMI(patients[i].weight, patients[i].height) > 20 && calculateBMI(patients[i].weight, patients[i].height) <= 27){
                        cout<< "normal weight";
                    } else if (calculateBMI(patients[i].weight, patients[i].height) > 27 && calculateBMI(patients[i].weight, patients[i].height) <= 32){
                        cout<< "overweight";
                    } else if (calculateBMI(patients[i].weight, patients[i].height) > 32){
                        cout << "obese";
                    }
                } cout <<endl;
            cout << "Patient Medical History: " <<patients[i].history<<endl;
            cout << "Services required: " <<patients[i].serviceDetails<<endl;
            if (patients[i].type == 1)
            {
                cout<<"Type: in-patient"<<endl;
                cout<<"Number of days at hospital: "<<patients[i].numberOfDaysStayed<<endl;
                cout<<"Level of severity: ";
                if (patients[i].numberOfDaysStayed < 10){
                    cout << "Low Severity";
                } else if (patients[i].numberOfDaysStayed >=10 && patients[i].numberOfDaysStayed < 30){
                    cout << "Medium Severity";
                } else if (patients[i].numberOfDaysStayed >= 30){
                    cout << "High Severity";
                } cout << endl;
                cout<<"Cost of bedding: ";
                double cost;
                cost = patients[i].numberOfDaysStayed * 50;
                cout << cost << " dollars";
            }
            else{
                cout<<"Type: out-patient"<<endl;
                cout<<"Appointment date: "<<patients[i].dateOfAppointment<<endl<<endl;
            } cout << endl << endl;
            return ;
            }
        }
        cout<<endl<<"No such patient exists at our facility"<<endl<<endl;
        // Display patient records in a table format
        // Add your implementation here
    }

    // Function to edit patient records
    void editRecords() {
        int choice;
        string inputstring;
        double inputdouble;
        string name;
        cout << "Enter name of patient you want to edit: ";
        cin >> name;
        for (int i = 0; i < patients.size(); i++) {
            if (name == patients[i].name) {
                cout << "What data do you want to change?" << endl;
                cout << "1. Name" << endl;
                cout << "2. Sex" << endl;
                cout << "3. Weight" << endl;
                cout << "4. Height" << endl;
                cout << "5. Medical History" << endl;
                cout << "6. Service Details" << endl;
                cout << "7. Delete all Patient information of " << patients[i].name <<endl;
                cout << "8. back to Main Menu" << endl;
                cin >> choice;
                switch (choice) {
                    case 1:
                        cout << "Enter input";
                        cin.ignore();
                        getline(cin, inputstring);
                        patients[i].name = inputstring;
                        break;
                    case 2:
                        cout << "Enter input";
                        cin.ignore();
                        getline(cin, inputstring);
                        patients[i].sex = inputstring;
                        break;
                    case 3:
                        cout << "Enter input";
                        cin >> inputdouble;
                        patients[i].weight = inputdouble;
                        break;
                    case 4:
                        cout << "Enter input";
                        cin >> inputstring;
                        patients[i].height = inputdouble;
                        break;
                    case 5:
                        cout << "Enter input";
                        cin.ignore();
                        getline(cin, inputstring);
                        patients[i].history = inputstring;
                        break;
                    case 6:
                        cout << "Enter input";
                        cin.ignore();
                        getline(cin, inputstring);
                        patients[i].serviceDetails = inputstring;
                        break;
                    case 7:
                        patients.erase(patients.begin()+i, patients.begin()+i+1);
                        break;
                    case 8:
                        break;
                    default:
                        cout << "Error";
                }
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
                    cout << "Successfully edited";
                }
                return;
            }
        }
        cout<<endl<<"No such patient exists at our facility"<<endl<<endl;
    }

    void generateReports() {
        int males=0,females=0,totalCount=0,vacantBeds=0,IN=0,OUT=0;

        for(int i = 0; i < patients.size();i++)
        {
            totalCount++;
            if(patients[i].sex=="Male" || patients[i].sex=="male")males++;
            else if (patients[i].sex == "Female" || patients[i].sex=="female")females++;

            if(patients[i].type == 1) IN++;
            else if(patients[i].type == 2) OUT++;
        }
        double occupancyRate;
        vacantBeds = MAXBEDS - IN;
        occupancyRate = (IN*100) / MAXBEDS;
        cout << endl<<"number of males admitted: "<<males<<endl;
        cout << "number of females admitted: "<<females<<endl;
        cout << "current patients: "<<totalCount<<endl;
        cout << "number of Vacant beds: "<<vacantBeds<<endl;
        cout << "current bed occupancy percentage: "<<occupancyRate<<"%"<<endl;
        cout << "number of outpatient: "<<OUT<<endl;
        cout << "number of inpatients: "<<IN<<endl<<endl;
        // Generate various statistical reports
        // Add your implementation here
    }
    static bool byNameInc(const Patient& p1, const Patient& p2)
    {
        if (strcmp(p1.name.c_str(),p2.name.c_str()) >= 0)
            return false;
        else{
            return true;
        }
    }

    static bool byNameDec(const Patient& p1, const Patient& p2)
    {
        if (strcmp(p1.name.c_str(),p2.name.c_str()) >= 0)
            return true;
        else{
            return false;
        }
    }
    // Function to sort patient records
    void sortRecords(int ascending) {
        // Sort patient records based on a field (e.g., name, weight, etc.)
        if (ascending == 1){
            sort(patients.begin(),patients.end(), byNameInc);
        } else if (ascending == 2){
            sort(patients.begin(),patients.end(), byNameDec);
        }
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
            cout << "Successfully sorted";
        }
    }
};

int main() {
    PatientRecords records;
    int choice;

    do {
        records.readData();
        // Display menu
        cout << "Hospital/Clinic Management System" << endl;
        cout << "1. Register New Patient" << endl;
        cout << "2. Display Patient Records" << endl;
        cout << "3. Edit Patient Records" << endl;
        cout << "4. Doctor's Schedule" << endl;
        cout << "5. Generate Reports" << endl;
        cout << "6. Sort Patient Records by Name" << endl;
        cout << "7. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                records.registerPatient();
                break;
            case 2:
                records.displayRecords();
                break;
            case 3:
                records.editRecords();
                break;
            case 4:
                records.doctorSchedule();
                break;
            case 5:
                records.generateReports();
                break;
            case 6:
                int order;
                cout << "Sorting order? (1 for ascending, 2 for descending): ";
                cin >> order;
                if (order != 1 && order != 2){
                    cout << "Error!";
                } else {
                    records.sortRecords(order);
                }
                break;
            case 7:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
