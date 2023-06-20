#include <iostream>
using namespace std;
bool primeChecker(int);
 bool primeNum = true;
int main() {
  int num;
  cout << "Enter a positive  integer: ";
  cin >> num;
  if (primeChecker(num))
    cout<< "True";
  else
    cout<< "False";
  return 0;
}
bool primeChecker(int num) {
  bool primeNum = true;
  if(num>1000){
    primeNum = false;
  }
  if ( num == 1) {
    primeNum = false;
  }

  for (int i = 2; i <= num / 2; ++i) {
    if (num % i == 0) {
      primeNum = false;
      break;
    }
  }
  return primeNum;
}