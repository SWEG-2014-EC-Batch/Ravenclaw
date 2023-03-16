#include <iostream>

using namespace std;

//5th question C
int main (){
    int row;
    int column;
    int num = 9;

    cout << "Enter row size:" << endl;
    cin >> row;
    cout <<"Enter column size:" << endl;
    cin >> column;

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            num = num + 1;
            cout << (num) << "  ";
        }
        cout << endl;
    }
    cout << endl;
}
