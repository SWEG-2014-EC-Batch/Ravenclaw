#include<iostream>
#include<cmath>
using namespace std;

double wind_cill_factor(double windspeed, double temprature ){
    if(temprature <= 10){
        //calculate the windchill effect
        double wind_chill_index = 13.12 + (0.6215 * temprature) - (11.37 * pow(windspeed, 0.16)) + (0.3965 * temprature * pow(windspeed,0.016));
        return wind_chill_index; 
    }
    else{
        cout << "Temperature in Celsius must be less than or equal to 10\n";
    }
}

int main()
{
    // accept temprature and windspeed from user
    double temprature, windspeed;
    cout << "Enter the wind speed in m/sec: ";
    cin >> windspeed;
    cout << "Enter the temperature in degree Celsius: ";
    cin >> temprature;
    double wind_chill_index = wind_cill_factor(windspeed, temprature);
    //exception case for temprature
        if(temprature<=10)
        {
            cout << "The chilling effect of the wind at " << temprature << "c is: " << wind_chill_index <<"c"<< endl;
        }
    return 0;
}
