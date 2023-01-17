#include <iostream>
using namespace std;

int main() {
    int io1;
    cout << "Find The Odd Number.\n";
    cout << "\n";

    cout << "Input your number here: ";
    cin >> io1;

    if ( io1 % 2 == 0)
    cout << "Number " << io1 << " is even.";
    else
    cout << "Number " << io1 << " is odd. We found it!\n";

    return 0;
}
