#include<iostream>
using namespace std;
int arraysum(int myarray[], int size) {
    int sum = myarray[0] + myarray[size-1];
    return sum;
}
int main() {
    int size;
    cout << "Enter the amount of numbers: ";
    cin >> size;
    int myarray[size];
    for(int i=0; i<size; i++){
        cout << "Enter number " << i+1 << ": ";
        cin >> myarray[i];
    }
    int sum = arraysum(myarray, size);
    cout << "The sum is: " << sum << endl;
    return 0;
}