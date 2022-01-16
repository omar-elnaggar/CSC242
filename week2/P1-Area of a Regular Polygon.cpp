#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int numSides = 0;
    double sideLength = 0.0, area = 0.0;
    double pi = 2 * acos(0.0);

    // enter number of sides
    cout << "Enter number of sides: ";
    cin >> numSides;
    // enter side length
    cout << "Enter the side length: ";
    cin >> sideLength;
    // (n * s^2)/(4 * tan(pi/n))
    area = (numSides * pow(sideLength, 2))/(4 * tan(pi/numSides));

    // print area
    printf("The area of the polygon is %.2f", area);

    return 0;
}