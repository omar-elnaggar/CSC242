#include <iostream>
#include <string>
#include <sstream>
#define MAX_STRING_LENGTH 100
using namespace std;

int main () {

    string string1;// string1
    string string2;// string2
    string common;// common characters string
    bool flag = false; // duplicated character found flag
    int commonCount = 0; // number of common characters

    // prompt for string1
    cout << "string1 = ";
    getline(cin, string1);
    // prompt for string2
    cout << "string2 = ";
    getline(cin, string2);

    // loop through each string and find common characters
    for (auto char1 : string1) {
        for (auto char2 : string2) {
            if (char1 == char2) { // common character found
                for (auto char3 : common) { // check if common character found already
                    if (char3 == char1) { // duplicated character found
                        flag = true; // set flag to true
                    }
                }
                if (!flag) // check if character has not already been found
                {
                    common += char1; // add common character
                    commonCount++; // increase count of common characters
                }
                flag = false; // reset flag
            }
        }
    }

    // print common characters
    cout << "Common Characters = " << common << endl;

    return 0;
}