#include <iostream>
#include <math.h>
using namespace std;
int menu;
int num;
int rem;
int digit;
int numDigit;
int r = 0;
long factorial;
int i;
int temp_stor;
int main() {
    cout << "1. Reverse of number" << endl;
    cout << "2. Number of digits " << endl;
    cout << "3. Sum of digits" << endl;
    cout << "4. Product of even digits" << endl;
    cout << "5. First and last digits and their sum" << endl;
    cout << "6. Swap first and last digits" << endl;
    cout << "7. Palindrome" << endl;
    cout << "8. Frequency of digits" << endl;
    cout << "9. Checking armstrong" << endl;
    cout << "10. Checking strong" << endl;
    cout << "11. Checking perfectness" << endl;
    cin >> menu;

    switch (menu) {
        case 1:
            cout << "enter any number:";
            cin >> num;
            do {
                digit = num % 10;
                r = (r * 10) + digit;
                num = num / 10;
            } while (num != 0);
            cout << " The reverse of the number is: " << r << endl;
            break;

        case 2:
            cout << "enter any number:";
            cin >> num;

            do {
                num /= 10;
                ++numDigit;
            } while (num != 0);

            cout << "Number of digits are " << numDigit;
            break;

        case 3:
            cout << " enter any number:";
            cin >> num;
            while(num>0)
            {
                rem = num%10;
                r = r+rem;
                num = num/10;
            }
            cout<<"Sum of Digits = "<<r;
            cout<<endl;

            break;

        case 4:
            cout << " enter any number:";
            cin >> num;
            r=1;

            while(num>0)
            {
                rem = num%10;
                if (rem % 2 == 0){
                    r = r*rem;
                }
                num = num/10;
            }
            cout<<"Product of Even Digits = "<<r;
            break;

        case 5:
            int lastDigit, firstDigit;
            cout << " enter any number:";
            cin >> num;

            lastDigit = num % 10;
            for(; num > 0; )
            {
                firstDigit = num % 10;
                num = num / 10;
            }
            cout << "The first digit of the number is: " << firstDigit;
            cout << "\nThe last digit of the number is: " << lastDigit;
            cout << "\nThe sum of the digits is:" << lastDigit + firstDigit;
            break;

        case 6:
            int swap;
            cout << " enter any number:";
            cin >> num;
            digit = log10(num);
            r = pow(10,digit);
            firstDigit = num / r;
            num = num % r;
            lastDigit = num % 10;
            num = num / 10;
            swap = lastDigit * r + num * 10 + firstDigit;
            cout << "Swapped value is : " << swap;
            break;

        case 7:
            cout << " enter any number:";
            cin >> num;
            num = temp_stor;
           while (temp_stor != 0){
                 digit = temp_stor  % 10;
                 r = (r * 10) + digit;
                 temp_stor=temp_stor/10;
           }
            if (temp_stor == r) {
            cout << " The number is a palindrome.";
            } else {
        cout << " The number is not a palindrome.";
            }
            break;

        case 8:
            cout << " enter any number: ";
            cin >> num;

            int a, b, count;
         for (a = 0; a < 10; a++)
            {
                cout << a << " = ";
                count = 0;
                for (b = num; b > 0; b = b / 10)
                {
                    r = b % 10;
                    if (r == a)
                    {
                        count++;
                    }
                }
                cout << count << endl;
            }
            break;

        case 9:
            int original;
            cout << " enter any number:";
            cin >> num;
            original = num;
            r=0;
while(num>0)
            {
                rem = num%10;
                int cube = pow (rem, 3);
                r = r + cube;
                num = num/10;
            }
            if (r == original){
                cout<< "The number " << original << " is an armstrong number.";
            } else {
                cout<< "The number " << original << " is not an armstrong number.";
            }

            break;

        case 10:
            r = 0;

            cout << " enter any number:";
            cin >> num;
            original = num;

            while(num>0)
            {
                factorial = 1;
                rem = num%10;
                for(i=1;i<=rem;i++){
                    factorial = factorial * i;
                }
                r = r + factorial;
                num = num/10;
            }
            if (r == original) {
                cout <<"the number " << original << " is a strong number.";
            } else {
                cout <<"the number " << original << " is not a strong number.";
            }

                break;

        case 11:
            cout << " enter any number:";
            cin >> num;

            for(i = 1; i < num; i++){
                if(num % i == 0)
                    r = r + i;
            }

            if(r == num) {
                cout << num << " is a perfect number";
            } else {
                    cout << num << " is not a perfect number";
                }
            break;

        default:
            cout <<"invalid input";
    }
    return 0;
}
