#include <iostream>
#include <time.h>
using namespace std;

int checkColumn(const int m[4][4], int column);
int checkRow(const int m[4][4], int row);
int checkMajorDiagonal(const int m[4][4]);
int checkSubDiagonal(const int m[4][4]);

int main () {
    // a program that randomly fills in 0s and 1s into a 4-by-4 square matrix
    bool found = false;
    srand(time(NULL));
    int matrix[4][4] = {
        rand() % 2, rand() % 2, rand() % 2, rand() % 2,
        rand() % 2, rand() % 2, rand() % 2, rand() % 2,
        rand() % 2, rand() % 2, rand() % 2, rand() % 2,
        rand() % 2, rand() % 2, rand() % 2, rand() % 2
    };


    
    // prints the matrix

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
    // finds the rows, columns, and diagonals with all 0s or 1s
    int result = 0;
    // rows
    for (int i = 0; i < 4; i++) {
        result = checkRow(matrix, i);
        if (result > -1){
            cout << "All " << result << "'s on row " << i << endl;
            found = true;
        }
    }
    if(!found) {
        cout << "No same numbers on a row" << endl;
    }
    found = false;
    
    // columns
    for (int i = 0; i < 4; i++) {
        result = checkColumn(matrix, i);
        if (result > -1){
            cout << "All " << result << "'s on column " << i << endl;
            found = true;
        }
    }
    if(!found) {
        cout << "No same numbers on a column" << endl;
    }
    found = false;

    // major diagonal
    result = checkMajorDiagonal(matrix);
    if (result > -1){
        cout << "All " << result << "'s on the major diagonal " << endl;
    } else {
        cout << "No same numbers on the major diagonal" << endl;
    }

    // sub diagonal
    result = checkSubDiagonal(matrix);
    if (result > -1){
        cout << "All " << result << "'s on the sub diagonal " << endl;
    } else {
        cout << "No same numbers on the sub diagonal" << endl;
    }

    return 0;
}

int checkRow(const int m[4][4], int row){
    int current = m[row][0];
    for (int i = 1; i < 4; i++)
    {
        if (m[row][i] != current){
            return -1;
        }
        current = m[row][i];
    }
    return current;
}
int checkColumn(const int m[4][4], int column){
    int current = m[0][column];
    for (int i = 1; i < 4; i++)
    {
        if (m[i][column] != current){
            return -1;
        }
        current = m[i][column];
    }
    return current;
}
int checkMajorDiagonal(const int m[4][4]){
    int current = m[0][0];
    for (int i = 1; i < 4; i++)
    {
        if (m[i][i] != current){
            return -1;
        }
        current = m[i][i];
    }
    return current;
}
int checkSubDiagonal(const int m[4][4]){
    int current = m[0][3];
    for (int i = 2; i > -1; i--)
    {
        if (m[3-i][i] != current){
            return -1;
        }
        current = m[3-i][i];
    }
    return current;
}