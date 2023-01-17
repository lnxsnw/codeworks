#include <iostream>
using namespace std;

int main() {
    // Declare Integer Variables
    int num0, num1, num2;

    // Greetings
    cout << "Moshi-Moshi! \n";
    cout << "This is Calculator. \n";
    cout << " \n";

    // Show Menu
    cout << "Select Your Operation: \n";
    cout << "[1] Addition\n";
    cout << "[2] Subtraction\n";
    cout << "[3] Multiplication\n";
    cout << "[4] Division\n";
    cout << " \n";

    // Ask
    cout << "Enter your Operation: \n";
    cin >> num0;

    cout << "Enter the first number: \n";
    cin >> num1;

    cout << "Enter the second number: \n";
    cin >> num2;

    cout << " \n";

    // Switch
    switch (num0) {
        case 1:
            cout << num1 << " + " << num2 << " = " << (num1 + num2);
            break;
        case 2:
            cout << num1 << " - " << num2 << " = " << (num1 - num2);
            break;
        case 3:
            cout << num1 << " * " << num2 << " = " << (num1 * num2);
            break;
        case 4:
            if (num2 != 0.0)
                cout << num1 << " / " << num2 << " = " << (num1 / num2);
            else
                cout << "[ERR] Can't Divide With 0.";
            break;
        default:
            cout << "[ERR] No Such Option Exists. Reload The App.";      
    }
    return 0;
}
