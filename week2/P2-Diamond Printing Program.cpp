#include <iostream>
using namespace std;

int main () {

    int count = 0; // initialize count at 0

    // loop 9 times for height
    for (int i = 0; i < 9; i++) {
        // count++
        if (i < 5 && i != 0){
            count++;
        } else if (i >= 5){
            count--;
        }
        // loop 10 times for width
        for (int j = 0; j < 10; j++) {
            // 5 is center increases by 1 on either side
            if (j == 5 || j >= (5 - count) && j <= (5 + count)) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}