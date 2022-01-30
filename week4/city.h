#include <math.h>

class City
{
public:
    double x, y, totalDistance;
    City(){
        x = 0;
        y = 0;
        totalDistance = 0;
    }

    City(double newX, double newY){
        x = newX;
        y = newY;
    }

    City(double newX, double newY, double newTotalDistance){
        x = newX;
        y = newY;
        totalDistance = newTotalDistance;
    }
    
    double getDistanceToCity(double otherX, double otherY){
        double distance = 0;

        distance = sqrt(pow((otherX - x),2) + pow((otherY - y), 2));

        return distance;
    }
};
