#include <iostream>
using namespace std;

// main() program execution begins.
int main() {	

    double nums[4] = {0.0};

    cout << "Enter Num 1: ";
    cin >> nums[0];

    cout << "Enter Num 2: ";
    cin >> nums[1];

    cout << "Enter Num 3: ";
    cin >> nums[2];

    cout << "Enter Num 4: ";
    cin >> nums[3];

    double sum = 0.0;

    for (int i = 0; i < 4; i++) {
        sum += nums[i];
    }

    cout << "The sum is: " << sum << endl;

    double average = sum / 4.0;

    cout << "The Average is: " << average << endl;

    int aboveAverage = 0;

    for (int i = 0; i < 4; i++) {
        if (nums[i] < average) {
            aboveAverage++;
        }
    }

    cout << aboveAverage << " numbers are above average." << endl;

    return 0;
}