#include <iostream>;

using namespace std;

int main(){
    float fuel;
    float milepergallon;
    float mile;
    cout<<"Input the fuel capacity in gallon: ";
    cin>>fuel;
    cout<<"Input the mile travelled per gallon of fuel: ";
    cin>>milepergallon;
    mile = fuel * milepergallon;
    cout<<"the distance travelled is " << mile;
}