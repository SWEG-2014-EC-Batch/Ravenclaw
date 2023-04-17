#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){

    char choice;
    cout << "Enter your choice of number type: " << endl;
    cout << "a, Decimal\nb, Binary\nc, Octal\nd, Hexadecimal";
    cout << "\nEnter your choice: " ;
    cin >> choice;

    if(choice == 'a') {
        
        int num, num1, num3;
        int count_1 = 0, bin[50], count_2 = 0, octal[20], count_3 = 0;
        char hex[100]; 

        cout << "Enter a positive integer with base 10: ";
        cin >> num;
        
        //* decimal to binary

        num1 = num;
        for(int i = 0; num > 0; i++){
            bin[i] = num % 2;
            num /= 2;
            count_1++; 
        }

        //* decimal to octal
        num += num1;
        for(int x = 0; num>0; x++){
            octal[x] = num % 8;
            num /= 8;
            count_2++;
        }

        //* decimal to hexadecimal
        num += num1;
        for(int a = 0; num >0; a++){
            
            int remainder = 0; 
            remainder = num % 16;

            if(remainder >= 0 && remainder < 10){
                hex[a] = remainder + 48;
            }
            else if(remainder >= 10){
                hex[a] = remainder + 55;
            }
            num /= 16;
            count_3++;
        }

        //*Constructing table
        cout << endl;
        num += num1;
        cout << "Decimal"<< "\t\tBinary"  << "\t\tOctal"  << "\t\tHexadecimal" << endl;
        cout << "-------------------------------------------------------------" << endl;
        cout << num << "\t\t";
        for(int j = count_1 - 1; j >= 0; j--){
            cout << bin[j]; 
        }        
        cout << "\t\t";
        for(int y = count_2 - 1; y>=0; y--){
            cout << octal[y];
        }       
        cout << "\t\t";
        for(int b = count_3 - 1; b>= 0; b--){
            cout << hex[b];
        }       
        cout << endl;     

    }
    else if(choice == 'b'){
        
        //* Binary to Decimal
        long long binary, decimal_1 = 0, k1 = 0, remainder_1;
        int binary_1;


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

        //* Table
        binary += binary_1;
        for(int j = count_1 - 1; j >= 0; j--){
            octal_holder = (octal_holder * 10 ) + octal[j];
        }
        
        cout << left;
        cout << setw(15) << "Binary" << setw(12) << "Decimal" << setw(12) << "Octal" << setw(12) << "Hexadecimal" << endl;
        for(int s = 1; s <= 50; s++) cout << "-";
        cout << endl;

        cout << setw(15) << binary << setw(12) << decimal_1 << setw(12) << octal_holder << setw(12);
        for(int b = count_2 - 1; b >= 0; b--){
            cout << hex[b];
        }
        cout << endl;
    }
    else if(choice == 'c'){
        //* Octal to decimal
        int octal, decimal_1 = 0, k1 = 0, octal_1;
        int binary_holder = 0;

        cout << "Enter an octal number with base 8: ";
        cin >> octal;

        octal_1 = octal;
        while (octal) {
            int remainder_1 = octal % 10;
            decimal_1 += remainder_1 * pow(8, k1);
            ++k1;
            octal /= 10;
        }

        // //* Octal to Binary
        
        int decimal_2 = 0, k2 = 0;
        int binary[30], count_1 = 0;

        // to decimal
        octal += octal_1;
        while (octal) {
            decimal_2 += (octal % 10) * pow(8, k2);
            ++k2;
            octal /= 10;
        }
        
        //to binary
        for(int i = 0; decimal_2 > 0; i++){
            binary[i] = decimal_2 % 2;
            decimal_2 /= 2;
            count_1++;
        }
        

        // //*  Octal to Hexadecimal
        int decimal_3 = 0, k3 = 0, count_2 = 0; 
        char hex[40];

        // to decimal
        octal += octal_1;
        while(octal){
            decimal_3 += (octal % 10) * pow(8, k3);
            ++k3;
            octal /= 10;
        }
        
        // to hexadecimal
        for(int a = 0; decimal_3 > 0; a++){
            int remainder_2 = decimal_3 % 16;

            if(remainder_2 >= 10){
                hex[a] = remainder_2 + 55;
            }
            if(remainder_2 < 10){
                hex[a] = remainder_2 + 48;
            }
            decimal_3 /= 16;
            count_2++;
        }

        //*table
        octal += octal_1;
        cout << left;
        cout << setw(12) << "Octal" << setw(12) << "Decimal" << setw(15) << "Binary" << setw(12) << "Hexadecimal" << endl;
        for(int i = 1; i <= 51; i++) cout << "-";
        
        cout << endl;
        cout << setw(12) << octal << setw(12) << decimal_1;
        for(int k = count_1 - 1; k >= 0; k--){
            binary_holder = (binary_holder * 10) + binary[k];
        }
        cout << setw(15) << binary_holder;
        for(int b = count_2 - 1; b >= 0; b--){
            cout << hex[b];
        }

        cout << endl;
    }
    else if(choice == 'd'){
        
        //* hexadecimal to decimal
    
        string hex, hex_2;
        cout << "Enter a hexadecimal number with base 16: ";
        cin >> hex;

        hex_2 = hex;
        int decimal_1 = 0;
        int size = hex.size();

        for (int i = 0; i < size; i++){
            int digit;
            if (hex[i] >= '0' && hex[i] <= '9')
                digit = hex[i] - '0';
            else if (hex[i] >= 'a' && hex[i] <= 'f')
                digit = hex[i] - 'a' + 10;
            else if (hex[i] >= 'A' && hex[i] <= 'F')
                digit = hex[i] - 'A' + 10;
            else
            {
                cout << "Invalid input!" << endl;
                return 0;
            }

            decimal_1 += digit * pow(16, size - 1 - i);
        }

        //* Hexadecimal to Binary
        
        //to decimal
        hex = hex_2;
        int decimal_2 = 0;
        size = hex.size();

        for (int j = 0; j < size; j++)
        {
            int digit_2;
            if (hex[j] >= '0' && hex[j] <= '9')
                digit_2 = hex[j] - '0';
            else if (hex[j] >= 'a' && hex[j] <= 'f')
                digit_2 = hex[j] - 'a' + 10;
            else if (hex[j] >= 'A' && hex[j] <= 'F')
                digit_2 = hex[j] - 'A' + 10;
            else
            {
                cout << "Invalid input!" << endl;
                return 0;
            }

            decimal_2 += digit_2 * pow(16, size - 1 - j);
        }

        // to Binary
        int binary[30], count_1 = 0;
        for(int a = 0; decimal_2 > 0; a++){
            binary[a] = decimal_2 % 2;
            count_1++;
            decimal_2 /= 2;
        }
        
        //* Hexadecimal to Octal
        hex = hex_2;
        int decimal_3 = 0;
        size = hex.size();

        for (int k = 0; k < size; k++)
        {
            int digit_3;
            if (hex[k] >= '0' && hex[k] <= '9')
                digit_3 = hex[k] - '0';
            else if (hex[k] >= 'a' && hex[k] <= 'f')
                digit_3 = hex[k] - 'a' + 10;
            else if (hex[k] >= 'A' && hex[k] <= 'F')
                digit_3 = hex[k] - 'A' + 10;
            else
            {
                cout << "Invalid input!" << endl;
                return 0;
            }

            decimal_3 += digit_3 * pow(16, size - 1 - k);
        }

        //to Octal
        int octal[30], count_2 = 0;
        for(int x = 0; decimal_3 > 0; x++){
            octal[x] = decimal_3 % 8;
            decimal_3 /= 8;
            count_2++;
        }
        //* Table
        hex = hex_2;
        int binary_holder = 0;
        
        for(int b = count_1 - 1; b >= 0; b--){
            binary_holder = (binary_holder * 10) + binary[b];
        }
        
        cout << left;
        cout << setw(12) << "Hexadecimal" << setw(12) << "Decimal" << setw(15) << "Binary" << setw(12) << "Octal" << endl;
        for(int i = 1; i <= 51; i++) cout << "-";

        cout << endl << left;
        cout << setw(12) << hex << setw(12) << decimal_1 << setw(15) << binary_holder;
        for(int y = count_2 - 1; y >= 0; y--){
            cout << octal[y];
        }

        cout << endl;

    }else {
        cout << "Invalid Input";
    }
    cout << endl;
        
}
