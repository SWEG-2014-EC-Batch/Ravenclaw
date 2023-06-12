#include <iostream>
using namespace std;

int main(){
    int size = 5;
    int letter;
    int h = 0;
    //* Exercise 5a and c
    int count = 10,row, column; 
    cout << "Enter the number of rows: ";
    cin >> row;

    cout << "Enter the number of columns: ";
    cin >> column;
    
    for (int i = 0; i < row; i++) {
        
        for (int j = 0; j < column; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl; 
    }


    //* Exercise 5b

    for(int i = 1; i <= 4; i++){
        for(int j = 1; j <= 7; j++){
            cout << "* ";
        }
        cout << endl;
    }
    //* Hollow rectangle
        int rows, cols;
        cout << "Enter the number of rows: ";
        cin >> rows;
        cout << "Enter the number of columns: ";
        cin >> cols;

        for(int i = 1; i <= rows; i++) {
            for(int j = 1; j <= cols; j++) {
                if(i == 1 || i == rows || j == 1 || j == cols) {
                    cout << "*";
                }
                else {
                    cout << " ";
                }
            }
            cout << endl;
        }
    //* Half pyramid
    for(int i = 1; i <= 6; i++){
        for(int j = 1; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }

    //* Inverted half pyramid
    for(int i = 6; i >= 1; i--){
        for (int j = 1; j <= i; j++){
            cout << "* ";
        }
        cout << endl;
    }


    //* Inverted hollow half pyramid
    
    for (int i = 6; i >= 1; i--) {
        
        for (int j = 1; j <= i; j++) {
            if (i == 6 || j == 1 || j == i) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }


    //* Full pyramid
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1, space = rows - 1; i <= rows; i++, space--) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //* full inverted pyramid
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = rows, space = 0; i >= 1; i--, space++) {
        for (int j = 1; j <= space; j++) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            cout << "*";
        }
        cout << endl;
    }

    //* Hollow full pyramid
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < 2 * i + 1; k++) {
            if (i == 0 || i == size - 1) {
                cout << "*";
            } else {
                if (k == 0 || k == 2 * i) {
                    cout << "*";
                } else {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }

    //* 12345 rectangle pattern

    for (int i = 1; i <= 5; i++){
        for (int j = 1; j <= 5; j++){
            cout << j << " ";
        }
        cout << endl;
    }

    //* 12345 half pyramid
    for (int i = 1; i <= 5; i++){
        for (int j= 1; j<=i; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    //* 12345 half pyramid the other side
    for (int i = 0; i < size; i++) {
        for (int j = 1; j < size - i; j++) {
            cout << " ";
        }
        for (int k = 0; k <= i; k++) {
            cout << (k+1);
        }
        cout << endl;
    }
    cout << endl;
    

    //* abcde rectangle
    for (int i = 1; i <= 5; i++){
        for (char j = 97; j <= 101; j++){
            cout << j << " ";
        }
        cout << endl;
    } 


    //* ABCDE half pyrmaid
    for (int i = 1; i <= 5; i++){
        for(char j = 65; j<=64+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }


    //* A - X continuous
    char letter = 'A';

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 6; j++) {
            if (letter > 'X') {
                break;
            }
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }



}