#include<iostream>
#include "HALLOWPATTERN_STRUCT.H"
using namespace std;

int main() {
    cout << "Enter the largest alphabet value to display (i.e. h = 8):" << endl
         << "Also make sure to enter below 26 to provide all alphabet patterns" << endl;
    cin >> triangle.num_alphabet;
    
    if (triangle.num_alphabet < 27) {
        displayUpperTriangle(triangle);
        displayLowerTriangle(triangle);
    } else {
        return 0;
    }
    
    return 0;
}
void displayUpperTriangle(Triangle triangle) {
        for (int row = 0; row < triangle.num_alphabet; row++) {
            for (int column = 65; column < 64 + (2 * triangle.num_alphabet); column++) {
                if (column <= (64 + triangle.num_alphabet) - row)
                    cout << (char)column;
                else if (column >= (64 + triangle.num_alphabet) + row)
                    cout << (char)((64 + triangle.num_alphabet) - (column % (64 + triangle.num_alphabet)));
                else
                    cout << " ";
            }
            cout << endl;
        }
    }
void displayLowerTriangle(Triangle triangle){
        for (int row = triangle.num_alphabet - 2; row >= 0; row--) {
            for (int column = 65; column < 64 + (2 * triangle.num_alphabet); column++) {
                if (column >= (64 + triangle.num_alphabet) + row)
                    cout << (char)((64 + triangle.num_alphabet) - (column % (64 + triangle.num_alphabet)));
                else if (column <= (64 + triangle.num_alphabet) - row)
                    cout << (char)column;
                else
                    cout << " ";
            }
            cout << endl;
        }
    }

