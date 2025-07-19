#include <iostream>

using namespace std;

// Function prototypes
void dash();
void courses(int num, string course[]);

int main() {
    // Variable declarations
    string stuID, stuName;
    int num;

    // Input section
    cout << "Please enter student's ID   : ";
    cin >> stuID;
    cin.ignore();

    cout << "Please enter student's name : ";
    getline(cin, stuName);

    cout << "Number of courses registered: ";
    cin >> num;
    cin.ignore();

    string course[num];

    // Get course information
    courses(num, course);

    // Output student information
    dash();
    cout << "Student(id/name): " << stuID << "/" << stuName << endl;
    dash();

    // Output courses
    cout << "Courses taken   : ";
    for (int i = 0; i < num; i++) {
        cout << course[i];
        if (i < num - 1) {
            cout << ", ";
        }
    }
    cout << endl;

    // Calculate and output total credit hours
    int total = 0;
    for (int i = 0; i < num; i++) {
        char lastchar = course[i][course[i].length() - 1];
        int credit = lastchar - '0'; // Convert char to int
        total += credit;
    }
    cout << "Total credit hours: " << total << endl;

    return 0;
}

// Function to print a line of dashes
void dash() {
    for (int i = 0; i < 50; i++) {
        cout << "-";
    }
    cout << endl;
}

// Function to input course information
void courses(int num, string course[]) {
    for (int i = 0; i < num; i++) {
        cout << "Course " << (i + 1) << ": ";
        getline(cin, course[i]);
    }
    cout << endl << endl;
}
