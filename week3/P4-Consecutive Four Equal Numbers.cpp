#include <iostream>
using namespace std;

bool isConsecutiveFour(const int values[], int size);

int main () {

    int const MAX_SIZE = 80;
    int valSize = 0;
    int values[MAX_SIZE] = {};

    do {
        cout << "Enter the number of values (MAX=" << MAX_SIZE << "): ";
        cin >> valSize;
    } while (valSize > MAX_SIZE);

    cout << "Enter the values: ";
    for (int i = 0; i < valSize; i++) {
        cin >> values[i];
    }

    if (isConsecutiveFour(values, valSize)){
        cout << "The list has consecutive fours";
    } else {
        cout << "The list does not contain consecutive fours";
    }

    return 0;
}

bool isConsecutiveFour(const int values[], int size){
    int num = 0; // consecutive value
    int consecutiveCount = 0; // count of consecutive values
    for (int i = 0; i < size; i++) {
        if (values[i] != num) {
            consecutiveCount = 1;
            num = values[i];
        } else if (values[i] == num) {
            consecutiveCount++;
        }
        if (consecutiveCount == 4) {
            return true;
        }
    }
    return false;
}