#include<iostream>
using namespace std;
int limit=0;
double x[2];
double myfxn(double nums[]);

int main (){
    
    cout << "How many nunbers do u want to enter: ";
    cin >> limit;
    double nums[limit];
    for(int i = 0; i < limit; i++){
        cout << "Eneter number " << i+1 << ": ";
        cin >> nums[i];
        
    }
   myfxn(nums);
}

double myfxn(double nums[]){
    cout << nums[0] << "  " << nums[limit-1];
}

