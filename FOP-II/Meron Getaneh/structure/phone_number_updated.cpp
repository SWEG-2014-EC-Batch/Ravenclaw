#include <iostream>
using namespace std;
struct Phone {
    int areaCode;
    int exchange;
    int number;
};

struct Person {
    string name;
    Phone phone;
};

void printphone(const Phone& p) {
    cout << "(" << p.areaCode << ") " << p.exchange << "-" << p.number << endl;
}

int main() {
    Person people[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter name of person " << i + 1 << ": ";
        cin >> people[i].name;

        cout << "Enter the area code: ";
        cin >> people[i].phone.areaCode;

        cout << "Enter the exchange: ";
        cin >> people[i].phone.exchange;

        cout << "Enter the number: ";
        cin >> people[i].phone.number;

        cout << endl;
    }

    for (int i = 0; i < 10; i++) {
        cout << "Name: " << people[i].name << endl;
        cout << "Phone: ";
        printphone(people[i].phone);
        cout << endl;
    }

    return 0;
}