#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream fout("customer.dat");
    int accountNumber[5];
    string firstName[5];
    string lastName[5];
    double accountBalance[5];

     for (int i = 0; i < 5; i++)
    {
        cout << "Enter the account number: ";
        cin >> accountNumber[i];

        cout << "Enter the first name: ";
        cin >> firstName[i];

        cout << "Enter the last name: ";
        cin >> lastName[i];
        fout << accountNumber[i] << " " << firstName[i] << " " << lastName[i] << " " << accountBalance[i] << endl;
    }

        fout.close();

    
    int userAccountNumber;
    cout << "Enter the account number to search for: ";
    cin >> userAccountNumber;

    // Open
    ifstream fin("customer.dat");

    // Search 
    bool found = false;
    for (int i = 0; i < 5; i++)
    {
        // Read the record 
        fin >> accountNumber[i] >> firstName[i] >> lastName[i] >> accountBalance[i];

        if (accountNumber[i] == userAccountNumber)
        {
            // The record was found
            found = true;

            // Display 
            cout << "Name: " << firstName[i] << " " << lastName[i] << endl;
            cout << "Account balance: " << accountBalance[i] << endl;
        }
    }

    fin.close();

    // If the record was not found
    if (!found)
    {
        cout << "The account number was not found." << endl;
    }

    return 0;
}


