#include <iostream>
#include <string>

using namespace std;

int main() {
    const int maxstudents = 15; 
    string studentNames[maxstudents]; 
    int entryFee = 10; 
    int snackCost = 5; 
    int numStudents; 
    int totalCost = 0;
    cout << "How many students will attend the game night? (Maximum 15): ";
    cin >> numStudents;
    if (numStudents > maxstudents) {
        cout << "Error: Not more students allowed." << endl;
        return 1;
    }
    for (int i = 0; i < numStudents; ++i) {
        cout << "Enter name for student " << (i + 1) << ": ";
        cin >> studentNames[i];
    }
    cout << "\nUser names for the event:" << endl;
    for (int i = 0; i < numStudents; ++i) {
        cout << "User " << (i + 1) << ": " << studentNames[i] << endl;
        totalCost += entryFee + snackCost;
    }
    cout << "\nTotal cost for all students: $" << totalCost << endl;
}
