#include <iostream>
#include <ctype.h>

using namespace std;
int main() {
char x;
cout << " enter character ";
cin>> x;
if (isdigit(x)&& x%2==0){
 cout<< " is even digit";
 }
 else if (isdigit(x) && x%2== 1){
  cout<< " is odd digit";
 }
else if (isupper(x)){
cout << x<< " is upper case";
}
else if (islower(x)){
cout<< x<< " is lower case";
}
else {
cout <<x<< " is a special character";
}
return 0;

}
