#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
 
using namespace std;

int main(){

    char choice;
    cout << "Enter your choice of number type: " << endl;
    cout << "a, Decimal\nb, Binary\nc, Octal\nd, Hexadecimal";
    cout << "\nEnter your choice: " ;
    cin >> choice;

    if(choice == 'a') {
        
        int num1, num2, num3;
        int count_1 = 0, binary[30], count_2 = 0, octal[20], count_3 = 0;
        char hexadecimal[30]; 
        int binaryHolder = 0, octalHolder = 0;

        cout << "Enter a positive integer with base 10: ";
        cin >> num1;
        
        //* decimal to binary

        num2 = num1;
        for(int i = 0; num1 > 0; i++){
            binary[i] = num1 % 2;
            num1 /= 2;
            count_1++; 
        }

        //* decimal to octal
        num1 += num2;
        for(int x = 0; num1 > 0; x++){
            octal[x] = num1 % 8;
            num1 /= 8;
            count_2++;
        }

        //* decimal to hexadecimal
        num1 += num2;
        for(int a = 0; num1 >0; a++){
            
            int remainder = 0; 
            remainder = num1 % 16;

            if(remainder >= 0 && remainder < 10){
                hexadecimal[a] = remainder + 48;
            }
            else if(remainder >= 10){
                hexadecimal[a] = remainder + 55;
            }
            num1 /= 16;
            count_3++;
        }

        //*Constructing table
        num1 += num2;
        cout << left;
        cout << setw(12) << "Decimal" << setw(15) << "Binary" << setw(12) << "Octal" << setw(12) << "Hexadecimal" << endl;

        for(int s = 1; s <= 51; s++) cout << "-";

        cout << endl << left;
        cout << setw(12) << num1;

        cout << setw(15);
        for(int j = count_1 - 1; j >= 0; j--){
            binaryHolder = (binaryHolder * 10) + binary[j]; 
        } 
        cout << binaryHolder << setw(12);
        for(int y = count_2 - 1; y>=0; y--){
            octalHolder = (octalHolder * 10) + octal[y];
        }   
        cout << octalHolder;
        for(int b = count_3 - 1; b>= 0; b--){
            cout << hexadecimal[b];
        }   
        cout << endl;     

    }
    else if(choice == 'b'){
        
        //* Binary to Decimal
        long long binary;
        int binary_1, decimal_1 = 0, k1 = 0, remainder_1;
        int octal_holder = 0;

        cout << "Enter a binary number with base 2: ";
        cin >> binary;

        binary_1 = binary;
        while (binary != 0) {
            remainder_1 = binary % 10;
            binary /= 10;
            decimal_1 += remainder_1 * pow(2, k1);
            ++k1;
        }
        //cout << "Decimal Number = " << decimal_1;

        //* Binary to Octal
        binary += binary_1;
        int decimal_2 = 0, k2 = 0, octal[30], count_1 = 0;

        // Convert binary to decimal
        while (binary) {
            decimal_2 += (binary % 10) * pow(2, k2);
            ++k2;
            binary /= 10;
        }

        // Convert decimal to octal
        for(int i = 0; decimal_2 > 0; i++){
            octal[i] = decimal_2 % 8;
            decimal_2 /= 8;
            count_1++;
        }
        

        //* Binary to hexadecimal
        
        binary += binary_1;
        int decimal_3 = 0, k3 = 0, count_2 = 0;
        char hex[30];

        // to decimal
        while(binary){
            decimal_3 += (binary % 10) * pow(2, k3);
            ++k3;
            binary /= 10;
        }

        // to hexadecimal
        for(int a = 0; decimal_3 > 0; a++){
            int remainder_2;
            remainder_2 = decimal_3 % 16;

            if(remainder_2 >= 10){
                hex[a] = remainder_2 + 55;
            }
            if(remainder_2 < 10){
                hex[a] = remainder_2 + 48;
            }
            decimal_3 /= 16;
            count_2++;
        }
