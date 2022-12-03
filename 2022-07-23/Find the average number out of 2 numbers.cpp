#include <iostream>
using namespace std;

int main() {
    int io1, io2, io3;
    cout << "Find the average number out of 2 numbers.\n";
    cout << "\n";
    
    cout << "Input Here: ";
    cin >> io1 >> io2;

    if(io1 >= io2)
        cout << "The Largest number of them all is " << io1;
    if(io2 >= io1)
        cout << "The Largest number of them all is " << io2;

    return 0;
}
