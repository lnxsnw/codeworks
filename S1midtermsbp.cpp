#include <iostream>
using namespace std; // Because why not?

// Viewer Notice: The code has many comments because it is used as a demonstration too, Flowchart may be necessary.

int main()
    {
    int Q1, Q2; // Initialize the variables (Get the jars!)
    cout << "Midterm Bonus Special\n";
    cout << "Range of Scores.\n";
    cout << "\n";
    
    // Ask the user the numbers first
    cout << "Enter first number: ";
    cin >> Q1;
    cout << "Enter second number: ";
    cin >> Q2;
    
    // The Logic Part
    if (Q1 >= 50 && Q1 <= 100) { // If Q1 passes the check if it is between 50 and 100, do this part
        if (Q2 >= 50 && Q2 <= 100) { // If Q2 is also True, do this and exit
            cout << "The average is: ";
            cout << (Q1 + Q2) / 2;
        }
        else { // If Q2 is wrong but Q1 is right, do this and exit
            cout << "Q2 is Invalid";
        }
    }
    else { // If Q1 fails the check
        if (Q2 >= 50 && Q2 <= 100) { // ...but Q2 is within the 50 and 100 range, do this and exit
            cout << "Q1 is Invalid";
        }
        else { //  ...and Q2 also fails the check, do this and exit
            cout << "Both are Invalid";
        }
    }
return 0;
}
