#include <iostream>
using namespace std;

double fahrenheitToCelsius(double fahrenheit);
double celsiusToFahrenheit(double celsius);

int main () {

    int input, output;

    cout << "Convert temperature to celsius or fahrenheit" << endl;
    cout << "1. Convert fahrenheit to celsius" << endl;
    cout << "2. Convert celsius to fahrenheit" << endl;
    cin >> input;

    switch(input){
        case 1: 
            cout << "Enter temperature in fahrenheit: ";
            cin >> output;
            cout << "Temperature in celsius is " << fahrenheitToCelsius(output) << endl;
            break;
        case 2: 
            cout << "Enter temperature in celsius: ";
            cin >> output;
            cout << "Temperature in celsius is " << celsiusToFahrenheit(output) << endl;
            break;
        default: 
            cout << "Invalid Entry: Rerun the program" << endl;
    }
    


    return 0;
}

double fahrenheitToCelsius(double fahrenheit){
    return 5.0 / 9.0 * (fahrenheit - 32);
}

double celsiusToFahrenheit(double celsius){
    return 9.0 / 5.0 * celsius + 32;
}