#include <iostream>
using namespace std;

const int ROWS = 3;
const int SIZE = 4;
double sumColumn(const double m[][SIZE], int rowSize, int columnIndex);

int main () {   

    double matrix[ROWS][SIZE] = {};
    cout << "Enter a 3-by-4 matrix row by row: " << endl;
    for (int i = 0; i < ROWS; i++){
        for (int j = 0; j < SIZE; j++){
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < SIZE; i++) {
        cout << "Sum of the elements at column " << i << " is " << sumColumn(matrix, SIZE, i) << endl;
    }
    

    return 0;
}

double sumColumn(const double m[][SIZE], int rowSize, int columnIndex){
    double total = 0.0;
    for (int i = 0; i < rowSize; i++) {
        total += m[i][columnIndex];
    }

    return total;
}