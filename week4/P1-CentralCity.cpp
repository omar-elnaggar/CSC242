#include <iostream>
#include <iomanip>
#include "city.h"

using namespace std;

const int MAX = 20;

int main () { 

    int cityAmt = 0;
    City cities[MAX];
    int centralCity = 0;
    double shortestTotal = 0.0;
    
    while (cityAmt > MAX || cityAmt == 0) {
        cout << "Enter the number of cities " << "(MAX: " << MAX << ")" << ": ";
        cin >> cityAmt;
    }

    cout << "Enter the coordinates of the cities: ";
    for (int i = 0; i < cityAmt; i++){
        cin >> cities[i].x;
        cin >> cities[i].y;
    }

    // the central point is the city that has the shortest total distance to all other cities.
    for (int i = 0; i < cityAmt; i++){
        for (int j = 0; j < cityAmt; j++){
            cities[i].totalDistance += cities[i].getDistanceToCity(cities[j].x, cities[j].y);
        }
    }

    for (int i = 0; i < cityAmt; i++){
        if (shortestTotal > cities[i].totalDistance){
            centralCity = i;
            shortestTotal = cities[i].totalDistance;
        }
    }

    cout << "The central city is at (" << setprecision(4) << cities[centralCity].x << ", " << cities[centralCity].y << ")" << endl;
    cout << "The total distance to all other cities is " << cities[centralCity].totalDistance << endl;
    
   
    return 0;
}