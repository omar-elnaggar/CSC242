#include <iostream>
using namespace std;

// recursive function to find if the given string is a palindrome
// this function narrows to the center of the string and compares left and right as it comes out of recursion
bool palindrome(char phrase[], int left, int right) {
    if (left >= right){
        return true;
    }
    return phrase[left] == phrase[right] && palindrome(phrase, left + 1, right - 1);
}

// main() program execution begins.
int main() {

    char fiveDigitInt[5];

    cout << "Enter a five-digit integer: ";
    cin >> fiveDigitInt;

    if (palindrome(fiveDigitInt, 0, 4)){ // gives the left and right limits as well as the string
        cout << fiveDigitInt << " is a palindrome" << endl;
    } else {
        cout << fiveDigitInt << " is not a palindrome" << endl;
    }

	return 0;
}
