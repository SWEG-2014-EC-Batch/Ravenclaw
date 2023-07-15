
#include<iostream>
#include "HALLOWPATTERN_FUN.H"
using namespace std;


int main()
{
    cout << "Enter Largest Alphabet Value to display(i.e: H=8):"<<endl<<"Also make sure to enter below 26 to provide all alphabet pattern"<<endl;
    cin >> num_alphabet;
    if (num_alphabet<27){
       displayUpperTriangle(num_alphabet);
       displayLowerTriangle(num_alphabet);
    }
    else{
       return 0;   
    } 
  }
    
void displayUpperTriangle(int num_alphabet){
    //nested for loop to display the upper triangled characters
     for (int row = 0; row < num_alphabet; row++) {
        for (int column = 65; column < 64 + (2 * num_alphabet); column++) {
            if (column <= (64 + num_alphabet) - row)
                cout << (char)column;
            else if (column >= (64 + num_alphabet) + row)
                cout << (char)((64 + num_alphabet) - (column % (64 + num_alphabet)));//portray the reversed characters
            else
                cout << " ";
        }
        cout << endl;
    }
}  

void displayLowerTriangle(int num_alphabet){
     //another for loop to display the lower triangled characters
    for (int row = num_alphabet-2; row >= 0; row--) {
        for (int column = 65; column < 64 + (2 * num_alphabet); column++) {
            if (column >= (64 + num_alphabet) + row)
                cout << (char)((64 + num_alphabet) - (column % (64 + num_alphabet)));//for reversed characters
            else if (column <= (64 + num_alphabet) - row)
                cout << (char)column;
            else
                cout << " ";
        }
        cout << endl;
    }
}
    
