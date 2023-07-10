#include <iostream>
using namespace std;

struct Phone {
    int areaCode;
    int exchange;
    int number;
};

void displayPhone(const Phone& p) {
    cout << "(" << p.areaCode << ") " << p.exchange << "-" << p.number << endl;
}

int main() {
    Phone phone1 = { 212, 767, 8900 }; 

    Phone phone2;
    cout << "Enter the area code: ";
    cin >> phone2.areaCode;
    cout << "Enter the exchange: ";
    cin >> phone2.exchange;
    cout << "Enter the number: ";
    cin >> phone2.number;

    // Display both phone numbers
    cout << "Phone 1: ";
    displayPhone(phone1);
    cout << "Phone 2: ";
    displayPhone(phone2);

    return 0;
}