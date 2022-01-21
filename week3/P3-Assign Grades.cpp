#include <iostream>
using namespace std;

char grade(int score, int best);
char grade(double grade, double best);

int main () {
    int best = 100;
    const int MAX_ARRAY_SIZE = 100;
    int students[MAX_ARRAY_SIZE] = {};
    int numStudents = 0;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    cout << "Enter the best possible score: ";
    cin >> best;

    cout << "Enter " << numStudents << " scores: ";
    for (int i = 0; i < numStudents; i++){
        cin >> students[i];
    }

    for (int i = 0; i < numStudents; i++) {
        cout << "Student " << i << " score is " << students[i] << " and grade is " << grade(students[i], best) << endl;
    }
    return 0;
}

char grade(int score, int best){
    if (score >= best - 10) {
        return 'A';
    } else if (score >= best - 20) {
        return 'B';
    } else if (score >= best - 30) {
        return 'C';
    } else if (score >= best - 40) {
        return 'D';
    } else {
        return 'F';
    }
}
char grade(double grade, double best){
    if (grade >= best - 10.0) {
        return 'A';
    } else if (grade >= best - 20.0) {
        return 'B';
    } else if (grade >= best - 30.0) {
        return 'C';
    } else if (grade >= best - 40.0) {
        return 'D';
    } else {
        return 'F';
    }
}