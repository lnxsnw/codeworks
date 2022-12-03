#include <iostream>
#include <iomanip>
using namespace std;

int choice;

int main(){

    double amount, balance = 0;

    //Set to two decimal places
    cout << fixed << setprecision(2);

    do{
    //Display Menu
        cout << "=====ATM MACHINE=====" << endl;
        cout << "" << endl;
        cout << "1. Balance" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdrawal" << endl;
        cout << "4. Quit" << endl;
        cout << "" << endl;
        cout << "Enter a Number" << endl;

        //Get choice
        cin >> choice;

        //Evaluate option
        switch(choice){
        case 1:
            cout << "Your balance is: Php." << balance << endl;
            cout << "" << endl;
            break;
        case 2:
            cout << "How much would you like to deposit? Php. ";
            cin >> amount;
            cout << "" << endl;
            if(amount <= 0){
                cout << "We could not accept that amount. Try again or exit." << endl;
                cout << "" << endl;
                break;
            }
            balance += amount;
            cout << "A total of " << amount << " has been added to your account!";
            break;
        case 3:
            cout << "How much would you like to withdraw? Php. ";
            cin >> amount;
            cout << "" << endl;
            if(amount <= 0){
                cout << "We could not accept that amount. Try again or exit." << endl;
                cout << "" << endl;
                break;
            }
            if(balance - amount >= 0){
                balance -= amount;
            }
            else
                cout << "Insufficient balance" << endl;
                cout << "" << endl;
            break;
        default:
            cout << "Invalid selection. Please try again" << endl;

        }

    }while(choice != 4);

return 0;
}
