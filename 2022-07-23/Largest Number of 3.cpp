#include <iostream>
using namespace std;

int main() {
    int io1, io2, io3;
    cout << "Find the largest number out of the 3.\n";
    cout << "\n";

    cout << "Input 3 Numbers Here, Spaced Apart: ";
    cin >> io1 >> io2 >> io3;

    if(io1 >= io2 && io1 >= io3)
        cout << "The Largest number of them all is " << io1;
    if(io2 >= io1 && io2 >= io3)
        cout << "The Largest number of them all is " << io2;
    if(io3 >= io1 && io3 >= io2)
        cout << "The Largest number of them all is " << io3;

    return 0;
}
