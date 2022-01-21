#include <iostream>
using namespace std;

bool isPerfect(int num);

int main () {
    int input = 0;

    cout << "This program checks whether an integer value is perfect." << endl;
    cout << "Please enter an integer: ";
    cin >> input;

    if (isPerfect(input)){
        cout << input << " is a perfect number." << endl;
    } else {
        cout << input << " is not a perfect number." << endl;
    }

    return 0;
}

bool isPerfect(int num){

    bool perfect = false;
    int numForSum = 1;
    int sum = 0;

    while (true){
        sum += numForSum;
        if (num < sum || num == 1) {
            return false;
        } else if (num == sum) {
            return true;
        }
        numForSum++;
    }
}
