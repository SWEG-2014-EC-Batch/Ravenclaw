#include<iostream>
using namespace std;
struct cooridinate {
    int x,y;
};
cooridinate readCoordinates() {
    cooridinate p;

    cout << "Enter x-coordinate: ";
    cin >> p.x;

    cout << "Enter y-coordinate: ";
    cin >> p.y;

    return p;
}
void printCoordinates(cooridinate p) {
    cout << "Coordinates: (" << p.x << ", " << p.y << ")" << endl;
}

int main() {
    cooridinate coordinates = readCoordinates();
    printCoordinates(coordinates);

    return 0;
}
