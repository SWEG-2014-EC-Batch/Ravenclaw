#include <iostream>
using namespace std;

struct phone {
    int number;
} phone_1;

int aFnx(int num);

int main(){

    cout << "Enter a number: ";
    cin >> phone_1.number;

    cout << aFnx(phone_1.number) << endl;

}

int aFnx(int num) {
    int pre = num * 2;
    return pre;
}