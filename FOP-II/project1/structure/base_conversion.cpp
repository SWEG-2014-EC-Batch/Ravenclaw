#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
#include <cctype>
using namespace std;

struct Base
{
    int num, num2, remainder;
    int decimal, deciHolder, binaryNum, octalNum;
    int binary[30], octal[30];
    string hexa;
    char hex[30];
    int count = 0;
} base;

void input(char &choice);
void choiceFxn(char &choice, int &num);

int decimalToBinary(int &num, int binary[], int &binaryNum, int &count);
int decimalToOctal(int &num, int octal[], int &octalNum, int &count);
int decimalToHexa(char hex[], int &num, int &count);

int binaryToDecimal(int &num, int &decimal);
int octalToDecimal(int &num, int &decimal);
int hexToDecimal(string &hexa, int &decimal);

void print(int &decimal, int &binaryNum, int &octalNum, char hex[], int &count);

int main()
{
    int num;
    char choice;
    input(choice);
    choiceFxn(choice, num);
}
void input(char &choice)
{
    cout << "Enter your choice of choiceber type: " << endl;
    cout << "a, Decimal\nb, Binary\nc, Octal\nd, Hexadecimal";
    cout << "\nEnter your choice: ";
    cin >> choice;
}
void choiceFxn(char &choice, int &num)
{
    if (choice == 'a' || choice == 'A')
    {
        cout << "Enter a decimal number: ";
        cin >> base.num;
        
        base.num2 = base.num;
        //* check decimal
        base.num = base.num2;
        decimalToBinary(base.num, base.binary, base.binaryNum, base.count);
        base.num = base.num2;
        decimalToOctal(base.num, base.octal, base.octalNum, base.count);
        base.num = base.num2;
        decimalToHexa(base.hex, base.num, base.count);
        base.num = base.num2;
        print(base.num, base.binaryNum, base.octalNum, base.hex, base.count);
    }
    else if (choice == 'b' || choice == 'B')
    {
        comebi:
        cout << "Enter a binary number: ";
        cin >> base.num;
        base.num2 = base.num;

        //* to check if the number is binary
        for (int i = 0; base.num > 0; i++)
        {
            base.remainder = base.num % 10;
            if (base.remainder == 1 || base.remainder == 0)
            {
            }
            else
            {
                cout << "Invalid input" << endl;
                goto comebi;
            }
            base.num /= 10;
        }

        base.num = base.num2;
        binaryToDecimal(base.num, base.decimal);
        base.deciHolder = base.decimal;
        decimalToOctal(base.decimal, base.octal, base.octalNum, base.count);
        base.decimal = base.deciHolder;
        decimalToHexa(base.hex, base.decimal, base.count);
        base.decimal = base.deciHolder;
        base.num = base.num2;
        print(base.decimal, base.num, base.octalNum, base.hex, base.count);
    }
    else if (choice == 'c' || choice == 'C')
    {
        comeoct:
        cout << "Enter an octal number: ";
        cin >> base.num;
        base.num2 = base.num;

        //* check if the number is octal
        for (int i = 0; base.num > 0; i++)
        {
            base.remainder = base.num % 10;
            if (base.remainder < 0 || base.remainder >= 8)
            {
                cout << "Invalid input\n";
                goto comeoct;
            }
            base.num /= 10;
        }

        base.num = base.num2;
        octalToDecimal(base.num, base.decimal);
        base.deciHolder = base.decimal;
        decimalToBinary(base.decimal, base.binary, base.binaryNum, base.count);
        base.decimal = base.deciHolder;
        decimalToOctal(base.decimal, base.octal, base.octalNum, base.count);
        base.decimal = base.deciHolder;
        decimalToHexa(base.hex, base.decimal, base.count);
        base.num = base.num2;
        base.decimal = base.deciHolder;
        print(base.decimal, base.binaryNum, base.num, base.hex, base.count);
    }
    else if (choice == 'd' || choice == 'D')
    {
        cout << "Enter a hexadecimal character: ";
        cin >> base.hexa;

        hexToDecimal(base.hexa, base.decimal);
        base.deciHolder = base.decimal;
        decimalToBinary(base.decimal, base.binary, base.binaryNum, base.count);
        base.decimal = base.deciHolder;
        decimalToOctal(base.decimal, base.octal, base.octalNum, base.count);
        base.decimal = base.deciHolder;
        decimalToHexa(base.hex, base.decimal, base.count);
        base.decimal = base.deciHolder;
        print(base.decimal, base.binaryNum, base.octalNum, base.hex, base.count);
    }
}

int decimalToBinary(int &num, int binary[], int &binaryNum, int &count)
{
    count = 0;
    for (int i = 0; num > 0; i++)
    {
        binary[i] = num % 2;
        num /= 2;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        binaryNum = (binaryNum * 10) + binary[i];
    }
}
int decimalToOctal(int &num, int octal[], int &octalNum, int &count)
{
    count = 0;
    for (int i = 0; num > 0; i++)
    {
        octal[i] = num % 8;
        num /= 8;
        count++;
    }

    for (int i = count - 1; i >= 0; i--)
    {
        octalNum = (octalNum * 10) + octal[i];
    }
}
int decimalToHexa(char hex[], int &num, int &count)
{
    int remainder, size;

    count = 0;
    for (int i = 0; num > 0; i++)
    {
        remainder = num % 16;

        if (remainder >= 0 && remainder < 10)
        {
            hex[i] = remainder + 48;
        }
        else if (remainder >= 10 && remainder < 16)
        {
            hex[i] = remainder + 55;
        }
        else
        {
            cout << "\nInvalid input" << endl;
        }
        num /= 16;
        count++;
    }
}

int binaryToDecimal(int &num, int &decimal)
{
    int remainder, power = 0;

    decimal = 0;
    for (int i = 0; num > 0; i++)
    {
        remainder = num % 10;
        decimal += remainder * pow(2, power);
        num /= 10;
        power++;
    }
}
int octalToDecimal(int &num, int &decimal)
{
    int remainder, power = 0;

    decimal = 0;
    for (int i = 0; num > 0; i++)
    {
        remainder = num % 10;
        decimal += remainder * pow(8, power);
        num /= 10;
        power++;
    }
}
int hexToDecimal(string &hexa, int &decimal)
{
    int size = hexa.size();
    decimal = 0;

    for (int i = 0; i < size; i++)
    {
        int digit;

        if (hexa[i] >= '0' && hexa[i] <= '9')
            digit = hexa[i] - '0';
        else if (hexa[i] >= 'a' && hexa[i] <= 'f')
            digit = hexa[i] - 'a' + 10;
        else if (hexa[i] >= 'A' && hexa[i] <= 'F')
            digit = hexa[i] - 'A' + 10;
        else
        {
            cout << "Invalid input!" << endl;
            return 0;
        }
        decimal += digit * pow(16, size - 1 - i);
    }
}

void print(int &decimal, int &binaryNum, int &octalNum, char hex[], int &count)
{
    cout << left
         << setw(10) << "Decimal"
         << setw(12) << "Binary"
         << setw(10) << "Octal"
         << setw(15) << "Hexadecimal";
    cout << endl;
    cout << setw(10) << decimal
         << setw(12) << binaryNum
         << setw(10) << octalNum;
    for (int i = count - 1; i >= 0; i--)
    {
        cout << hex[i];
    }
    cout << endl;
}
