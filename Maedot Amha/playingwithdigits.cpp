#include <iostream>
#include <cmath>
#include <stdio.h>
using namespace std;

int main() {
    int num;
    int rem;
    int r;
    int digit;
    int rev;
    int counter = 0;
    int sum = 0;
    int prod =1;
    int last,first;
    int menu;
    int factorial;

    cout<< "MENU FOR BMI CALCULATION"<<endl;
    cout<< "1. for reversing"<<endl;
    cout<< "2. for counting digits"<<endl;
    cout<< "3. for the sum of the numbers" <<endl;
    cout <<"4. for the product of the numbers"<< endl;
    cout<< "5. for the sum of the first and last digit"<< endl;
    cout<< "6. for swaping the first and last digit"<< endl;
    cout<< "7. for checking if the number is palindrome"<< endl;
    cout <<"8. for finding the frequency of each digit "<< endl;
    cout <<"9. for checking if the number is armstrong"<< endl;
    cout <<"9. for checking if the number is strong "<< endl;
    cout <<"9. for checking if the number is perfect number"<< endl;
    cin>> menu;
     if (menu == 1){
        cout << " Please Enter any number";
        cin >> num;
        while (num) {
        rem= num%10;
        num /= 10;
        rev = (rev *10) + rem;

        } cout << " the reverse is "<< rev;
        }
            if (menu == 2){
                cout << "please enter any number";
                cin >> num;
                if (num == 0){
                counter = 0 ;
                cout<< " number of digit is "<< counter;
                } else {
                while (num != 0){
                num = num /10 ;
                ++counter;
                }cout << " The number of digits is" << counter;
                }}
                if ( menu ==3){
                cout << "Please enter a number ";
                cin >> num;
                    while (num != 0) {
                    sum += num % 10;
                    num = num /10 ;
                   }cout<< " The sum value is"<< sum;
                  }
                  
                  if (menu == 4){
                  cout << "Please enter a number ";
                  cin >> num;
                    while (num !=0) {
                        prod = prod * num % 10;
                        num = num / 10;
                     }cout << " the product of the digit is"<< prod;
                     }

                  if (menu ==5) {
                    cout << "Please enter a number ";
                    cin >> num;
                    rem = num % 10;
                    while (num >= 10){
                    num = num /10;
                    }cout << "The first digit is"<< num <<" "<<"The last digit is "<< rem << endl;
                    num = num+ rem;
                    cout<< "The sum is"<< num;
                    }

                    if (menu == 6){
                        cout << "Please enter a number ";
                        cin >> num;
                        int divid;
                        int digit;
                        digit=log10(num);
                        divid= pow(10,digit);
                        int middle;
                        int swap;
                        first = num / divid;
                        last = num % 10;
                        middle = num % divid;
                        middle = middle /10;
                        
                        swap = last *divid + middle* 10 + first;
                        cout <<"The swaped value is "<< swap;
                        }
                        if (menu== 7){
                        int old;
                        r= 0;
                        cout << " enter any number:";
                        cin >> num;
                        old = num;
                        do {
                        digit = num % 10;
                        r = (r * 10) + digit;
                        num = num / 10;
                            } while (num != 0);
                        cout << r;
                            if (old == r) {
                            cout << " The number is a palindrome.";
                                } else {
                            cout << " The number is not a palindrome.";
                                }}

                        if (menu== 8) {
                            cout << " enter any number: ";
                            cin >> num;
                            int a, b, count;
                            for (a = 0; a < 10; a++)
                             {
                            cout << a << " = ";
                            count = 0;
                            for (b = num; b > 0; b = b / 10)
                            {r = b % 10;
                                if (r == a)
                                {
                                count++;
                                 }
                                }
                                cout << count << endl;
                                 }}
                        if ( menu == 9 ){
                        int original;
                         cout << " Please enter any number:";
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
                        if ( menu == 10) {
                         r = 0;

                        cout << " enter any number:";
                        cin >> num;
                        original = num;

                        while(num>0)
                        {
                        factorial = 1;
                        rem = num%10;
                        for(int i=1;i<=rem;i++){
                       factorial = factorial * i;
                        }
                        r = r + factorial;
                        num = num/10;
                        }
                        if (r == original) {
                        cout <<"the number " << original << " is a strong number.";
                        } else {
                        cout <<"the number " << original << " is not a strong number.";
                        }}
                        if ( menu == 11) { 
                        cout << " enter any number:";
                        cin >> num;

                        for(int i = 1; i < num; i++){
                        if(num % i == 0)
                        r = r + i;
                        }if(r == num) {
                        cout << num << " is a perfect number";
                        } else {
                        cout << num << " is not a perfect number";
                        }
                         } }}
    