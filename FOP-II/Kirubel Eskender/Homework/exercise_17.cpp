#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

float windChillFactor(float windSpeed, float temperature);

int main() {
    float windSpeed, temperature;
    cout << "Windchill calculator" << endl;
    cout << "input wind speed: ";
    cin >> windSpeed;
    cout << "input temperature: ";
    cin >> temperature;
    windChillFactor(windSpeed, temperature);
    return 0;
}

float windChillFactor(float windSpeed, float temperature){
    assert(temperature <= 10);
    float windChillFactor = 13.12 + (0.6215 * temperature) - (11.37 * pow(windSpeed, 0.16)) + (0.3965 * temperature * pow(windSpeed, 0.016));
    cout << "the chilling factor is " <<windChillFactor;
}
