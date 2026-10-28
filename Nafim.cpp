#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main() {
    char names[5][20];
    int marks[5][3];

    for (int i = 0; i < 5; i++) {
        cout << "Enter name " << i + 1 << ": ";
        cin.getline(names[i], 20);

        for (int j = 0; j < 3; j++) {
            cout << "Enter mark " << j + 1 << ": ";
            cin >> marks[i][j];
        }
        cin.ignore();
    }

    cout << "\n" << setw(12) << "Name" << setw(9) << "M1" << setw(9) << "M2" << setw(9) << "M3" 
         << setw(9) << "Total" << setw(10) << "Avg" << endl;

    int topStudentIndex = 0;
    int maxTotal = marks[0][0] + marks[0][1] + marks[0][2];

    for (int i = 0; i < 5; i++) {
        int total = marks[i][0] + marks[i][1] + marks[i][2];
        float avg = total / 3.0;

        if (total > maxTotal) {
            maxTotal = total;
            topStudentIndex = i;
        }

        cout << setw(12) << names[i] 
             << setw(9) << marks[i][0] 
             << setw(9) << marks[i][1] 
             << setw(9) << marks[i][2] 
             << setw(9) << total 
             << setw(10) << fixed << setprecision(1) << avg << endl;
    }

    cout << "\nTop student: " << names[topStudentIndex] << endl;

    return 0;
}
