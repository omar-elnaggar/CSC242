#include <iostream>
#include <iomanip>
using namespace std;

int factorial (int num);

int main () {

    int nTerms = 0;
    double euler = 1.0;

    // prompt for number of terms to calculate
        cout << "This program calculates the euler number to a given number of terms. (Max 34)" << endl;
        cout << "Please enter the number of terms to caluclate to: ";
        cin >> nTerms;
    while (nTerms >= 35){
        cout << "Please enter a number of terms 34 or lower: ";
        cin >> nTerms;
    }
    // calculate e to the number according to user input
    for (int i = 1; i < nTerms; i++) {
        euler += 1.0/factorial(i);
    }
    // print e
    cout << "Euler's Number: " << setprecision(100) << euler << endl;

    return 0;
}

// function that calculates the factorial of a given number
int factorial (int num) {
    int factor = 1;
    for (int i = 1; i <= num; i++){
        factor *= i;
    }
    return factor;
}