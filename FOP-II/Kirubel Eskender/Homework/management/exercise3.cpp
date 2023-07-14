
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Customer {
    int accountNumber;
    string firstName;
    string lastName;
    double balance;
};

const string FNAME = "customer_records.txt";

void createCustomerFile() {
    ofstream file(FNAME);

    if (!file) {
        cerr << "Error creating the file!" << endl;
        return;
    }

    Customer customers[5] = {
        {1000, "Abe", "kebe", 18000.0},
        {1001, "rani", "Seaid", 10000.0},
        {1002, "Michael", "feysa", 8000.5},
        {1003, "mahi", "Worku", 3000.75},
        {1004, "Dagm", "Belay", 20000.0}
    };

    for (int i = 0; i < 5; i++) {
        file << customers[i].accountNumber << " "
             << customers[i].firstName << " "
             << customers[i].lastName << " "
             << customers[i].balance << endl;
    }

    file.close();
}

void Customer(int accountNum) {
    ifstream file(FNAME);

    if (!file) {
        cerr << "Error opening the file!" << endl;
        return;
    }

    struct Customer customer;
    bool found = false;

    while (file >> customer.accountNumber >> customer.firstName
                >> customer.lastName >> customer.balance) {
        if (customer.accountNumber == accountNum) {
            cout << "Account Number: " << customer.accountNumber << endl;
            cout << "Name: " << customer.firstName << " " << customer.lastName << endl;
            cout << "Balance: " << customer.balance << endl;
            found = true;
            break;
        }
    }

    file.close();

    if (!found) {
        cout << "Customer with account number " << accountNum << " not found." << endl;
    }
}

int main() {
    createCustomerFile();

    int accountNum;
    cout << "Enter an account number: ";
    cin >> accountNum;

    Customer(accountNum);

    return 0;
}

