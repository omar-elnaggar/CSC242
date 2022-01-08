#include <iostream>
using namespace std;

// main() program execution begins.
int main() {

    int x = 0;

    cout << "This program calculate e to the x.\nEnter your x value: ";
    cin >> x;

    double euler = 1.0 + x + (x*x)/2.0 + (x*x*x)/6.0 + (x*x*x*x)/24.0 + (x*x*x*x*x)/120.0;

    cout << "e to the " << x << " is equal to " << euler << endl;

	return 0;
}