#include <iostream>
#include <iomanip>
using namespace std;

int choice;
int redo;

// system("cls") is a Windows exclusive thing. Run this code on Windows (Codeblocks or similar) to avoid getting errors!

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
        system("cls");
        cout << "" << endl;
            cout << "Your balance is: Php." << balance << endl;
            cout << "" << endl;

            cout << "" << endl;
            cout << "Thank you for using the ATM Machine!" << endl;
            cout << "Would you like to do another transaction?" << endl;
            cout << "" << endl;
            cout << "Enter 1 to do another transaction, else press 0." << endl;
            cin >> redo;

            if(redo == 1){
                system("cls");
                break;
            }
            else
            redo = 0;
            break;
        case 2:
                system("cls");
        cout << "" << endl;
            cout << "How much would you like to deposit? Php. ";
            cin >> amount;
            cout << "" << endl;
            if(amount <= 0){
                cout << "" << endl;
                cout << "We could not accept that amount. Try again or exit." << endl;
                cout << "" << endl;
                break;
            }
            balance += amount;
            cout << "A total of " << amount << " has been added to your account!" << endl;
            cout << "" << endl;

            cout << "" << endl;
            cout << "Thank you for using the ATM Machine!" << endl;
            cout << "Would you like to do another transaction?" << endl;
            cout << "" << endl;
            cout << "Enter 1 to do another transaction, else press 0." << endl;
            cin >> redo;

            if(redo == 1){
                system("cls");
                break;
            }
else
            redo = 0;
            break;
        case 3:
                system("cls");
        cout << "" << endl;
            cout << "How much would you like to withdraw? Php. ";
            cin >> amount;
            cout << "" << endl;
            if(amount <= 0){
                cout << "" << endl;
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

            cout << "" << endl;
            cout << "Thank you for using the ATM Machine!" << endl;
            cout << "Would you like to do another transaction?" << endl;
            cout << "" << endl;
            cout << "Enter 1 to do another transaction, else press 0." << endl;
            cin >> redo;

            if(redo == 1){
                system("cls");
                break;
            }
            else
            redo = 0;
            break;
        case 4:
            system("cls");
            cout << "" << endl;
            cout << "Thank you for using the ATM Machine!" << endl;
            cout << "Would you like to do another transaction?" << endl;
            cout << "" << endl;
            cout << "Enter 1 to do another transaction, else press 0." << endl;
            cin >> redo;

            if(redo == 1){
                system("cls");
                break;
            }
            else
            redo = 0;
            break;
        default:
            if(choice != 4) {
                cout << "Invalid selection. Please try again." << endl;
            }
            else
            cout << " ";
        }

    }while(redo != 0);
    system("cls");
        cout << " " << endl;
        cout << "Thank you for using the ATM Machine!" << endl;
        cout << "Re-run the program again!";
        cout << " " << endl;
return 0;
}
