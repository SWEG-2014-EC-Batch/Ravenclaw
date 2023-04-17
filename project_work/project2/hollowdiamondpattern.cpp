// hallow diamond pattern
#include<iostream>
using namespace std;
int main()
{
    int row, column, num_alphabet;
    cout << "Enter Largest Alphabet Value to display(i.e:H=8):";
    cin >> num_alphabet;
    //nested for loop to display the upper triangled characters
     for (row = 0; row < num_alphabet; row++) {
        for (column = 65; column < 64 + (2 * num_alphabet); column++) {
            if (column >= (64 + num_alphabet) + row)
                cout << (char)((64 + num_alphabet) - (column % (64 + num_alphabet)));//portray the reversed characters
            else if (column <= (64 + num_alphabet) - row)
                cout << (char)column;
            else
                cout << " ";
        }
        cout << endl;
    }
  //another for loop to display the lower triangled characters
    for (row = num_alphabet-2; row >= 0; row--) {
        for (column = 65; column < 64 + (2 * num_alphabet); column++) {
            if (column >= (64 + num_alphabet) + row)
                cout << (char)((64 + num_alphabet) - (column % (64 + num_alphabet)));//for reversed characters
            else if (column <= (64 + num_alphabet) - row)
                cout << (char)column;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;   
  }
    
    
