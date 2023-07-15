#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

void input(int& num1);

void decimal_to_binary(int num1, int& count, int binary[]);
void decimal_to_octal(int num1, int& count, int octal[]);
void decimal_to_hexadecimal(int num1, int& count, string hexadecimal[]);

int binary_to_decimal(int num1);
int octal_to_decimal(int num1);
int hexadecimal_to_decimal(string hexadecimal) ;
void print(int num, int count, int decimal, int binary[], int octal[], string hexadecimal[]);
int main() {
    int num1 = 0, count = 0, binary[100] = { 0 }, octal[100] = { 0 }, decimal = 0;
    string hexadecimal[100] = {}, hex_num;
    char choice;
    cout << "Enter your choice of number type:\n";
    cout << "a, Decimal\nb, Binary\nc, Octal\nd, hexadecimal\n";
    cout << "Enter yourchoice: ";
    cin >> choice;
    switch (choice) {
    case 'a':
        input(num1);
        decimal_to_binary(num1, count, binary);
        decimal_to_octal(num1, count, octal);
        decimal_to_hexadecimal(num1, count, hexadecimal);
        print(num1, count, num1, binary, octal, hexadecimal);
        break;
    
    case 'b':
        int binary_input;
        cout << "Enter the binary number: ";
        cin >> binary_input;
        decimal = binary_to_decimal(binary_input);
        if (decimal != 0) {
            decimal_to_binary(decimal, count, binary);
            decimal_to_octal(decimal, count, octal);
            decimal_to_hexadecimal(decimal, count, hexadecimal);
            print(decimal, count, decimal, binary, octal, hexadecimal);
        }
        break;
    case 'c':
        input(num1);
        decimal = octal_to_decimal(num1);
        decimal_to_binary(decimal, count, binary);
        decimal_to_octal(decimal, count, octal);
        decimal_to_hexadecimal(decimal, count, hexadecimal);
        print(num1, count, decimal, binary, octal, hexadecimal);
        break;
    case 'd':
        cin.ignore();
        cout << "Enter the hexadecimal number: ";
        getline(cin, hex_num);
        decimal = hexadecimal_to_decimal(hex_num);
        if (decimal != 0) {
            decimal_to_binary(decimal, count, binary);
            decimal_to_octal(decimal, count, octal);
            decimal_to_hexadecimal(decimal, count, hexadecimal);
            print(decimal, count, decimal, binary, octal, hexadecimal);
        }
        break;
    default:
        cout << "Invalid choice!" << endl;
        break;
    }
    return 0;
}
void input(int& num1) {
    cout << "Enter the desired number: ";
    cin >> num1;
}

void decimal_to_binary(int num1, int& count, int binary[]) {
    
    for (int i = 0; num1 > 0; i++) {
        binary[i] = num1 % 2;
        num1 /= 2;
        count++;
    }
}

void decimal_to_octal(int num1, int& count, int octal[]) {
    for (int i = 0; num1 > 0; i++) {
        octal[i] = num1 % 8;
        num1 /= 8;
        count++;
    }
}

void decimal_to_hexadecimal(int num1, int& count, string hexadecimal[]) {
    for (int i = 0; num1 > 0; i++) {
        int remainder = num1 % 16;
        if (remainder >= 0 && remainder < 10) {
            hexadecimal[i] = remainder + '0';
        }
        else if (remainder >= 10 && remainder < 16) {
            hexadecimal[i] = remainder + 'A' - 10;
        }
        num1 /= 16;
        count++;
    }
}

int binary_to_decimal(int num1) { 
    int decimal = 0, exponent = 0;
    while (num1 != 0) {
        int remainder = num1 % 10;
        if (remainder != 0 && remainder != 1) {
            cout << "Error: The input is not a binary number. Please enter another number" << endl;
            input (num1);
        }
        decimal += remainder * pow(2, exponent);
        exponent++;
        num1 /= 10;
    }
    return decimal;
}

int octal_to_decimal(int num1) {
    int decimal = 0, exponent = 0;
    while (num1 != 0) {
        int remainder = num1 % 10;
        if (remainder >= 8) {
            cout << "Error: The input is not an octal number.Input Another number please" << endl;
        input (num1);
        }
        decimal += remainder * pow(8, exponent);
        exponent++;
        num1 /= 10;
    }
    return decimal;
}

int hexadecimal_to_decimal(string hexadecimal) {
    int decimal = 0, size = hexadecimal.size();
    for (int i = 0; i < size; i++) {
        int digit;
        if (hexadecimal[i] >= '0' && hexadecimal[i] <= '9')
            digit = hexadecimal[i] - '0';
        else if (hexadecimal[i] >= 'a' && hexadecimal[i] <= 'f')
            digit = hexadecimal[i] - 'a' + 10;
        else if (hexadecimal[i] >= 'A' && hexadecimal[i] <= 'F')
            digit = hexadecimal[i] - 'A' + 10;
        else {
            cout << "Error: The input is not a hexadecimal number." << endl;
            return 0;
        }
        decimal += digit * pow(16, size - i - 1);
    }
    return decimal;
}

void print(int num, int count, int decimal, int binary[], int octal[], string hexadecimal[]) {
   cout << left ;
    cout << setw(15) << "Decimal" << setw(15) << "Binary" << setw(15) << "Octal" << setw(15) << "Hexadecimal" << endl;
    cout << "------------------------------------------------------------------" << endl;
    
    cout << decimal << setw(10);
    for (int i = count - 1; i >= 0; i--) {
        cout << binary[i];
    }

    cout << setw(10);
    for (int i = count - 1; i >= 0; i--) {
        cout << octal[i];
    }

    cout << setw(10);
    for (int i = count - 1; i >= 0; i--) {
        cout << hexadecimal[i];
    }
    cout << endl;
}
