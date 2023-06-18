//q16
#include <iostream>

using namespace std;

void input(int& hour, int& minute) {

    cout << "Enter hour in 24-hour notation: ";

    cin >> hour;

    cout << "Enter minute: ";

    cin >> minute;

}

void convert(int& hour, int& minute, char& am_pm) {

    if (hour >= 12) {

        am_pm = 'P';

    } else {

        am_pm = 'A';

    }

    

    if (hour == 0) {

        hour = 12;

    } else if (hour > 12) {

        hour -= 12;

    }

}

void output(int hour, int minute, char am_pm) {

    cout << "The time in 12-hour notation is: " << hour << ":" << minute << " " << am_pm << "M" << endl;

}

int main() {

    int hour, minute;

    char am_pm;

    while (true) {

        input(hour, minute);

        convert(hour, minute, am_pm);

        output(hour, minute, am_pm);

        char repeat_choice;

        cout << "Convert another time? (Y/N)";

        cin >> repeat_choice;

        if (repeat_choice == 'N' || repeat_choice == 'n') {

            break;

        }

    }

    return 0;

}
