#include <iostream>
using namespace std;

int main() {
    int io1, io2, io3, io4, io5;
    cout << "Find the average number out of 5 numbers.\n";
    cout << "\n";

    cout << "Enter first number: ";
    cin >> io1;
    cout << "Enter second number: ";
    cin >> io2;
    cout << "Enter third number: ";
    cin >> io3;
    cout << "Enter fourth number: ";
    cin >> io4;
    cout << "Enter fifth number: ";
    cin >> io5;

    cout << "\n"
    cout << "The average is: ";
    cout << (io1 + io2 + io3 + io4 + io5) / 5;

    return 0;
}
