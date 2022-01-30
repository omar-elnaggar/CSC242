#include <iostream>
#include "rectangle.h"
using namespace std;

int main () {
    // Constructor test
    Rectangle rectangle1;
    Rectangle rectangle2;

    // Set
    rectangle1.setWidth(10);
    rectangle1.setHeight(10);

    rectangle2.setWidth(5);
    rectangle2.setHeight(5);

    // Get
    cout << "The width of rectangle1 is " << rectangle1.getWidth() << endl;
    cout << "The width of rectangle2 is " << rectangle2.getWidth() << endl;

    cout << "The height of rectangle1 is " << rectangle1.getHeight() << endl;
    cout << "The height of rectangle2 is " << rectangle2.getHeight() << endl;

    // Area
    cout << "The area of rectangle1 is " << rectangle1.calcArea() << endl;
    cout << "The area of rectangle2 is " << rectangle2.calcArea() << endl;

    // Perimeter
    cout << "The perimeter of rectangle1 is " << rectangle1.calcPerimeter() << endl;
    cout << "The perimeter of rectangle2 is " << rectangle2.calcPerimeter() << endl;

    return 0;
}