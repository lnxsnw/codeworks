#include <iostream>
using namespace std;
int main() {
    int order, payment;

    cout << "[ THE MENU ] \n";
    cout << "\n";
    cout << "[1] P100 - Fried Chicken\n";
    cout << "[2] P150 - Lumpia Shanghai\n";
    cout << "[3] P300 - Noodles with Halo-Halo\n";
    cout << "[4] P500 - Chinese Style Roasted Pork\n";
    cout << "[5] P1000 - Baby Back Ribs with Roasted Pork\n";
    cout << "\n";

    cout << "Type the number of your order: ";
    cin >> order;
    cout << "\n";

    switch (order) {
        case 1:
            cout << "Selected: [1] P100 - Fried Chicken\n";
            cout << "\n";
            cout << "To Checkout, Please Enter Amount To Pay.\n";
            cout << "To Cancel, Type the number 0.\n";
            cout << "\n";
            cout << "Enter Here: ";
            cin >> payment;
            cout << "\n";

            if (payment == 0) {
                cout << "Purchase Cancelled!";
                return 0;
            }
            else if (payment <= 99) {
                cout << "Purchase Failed: Insufficient Payment.";
                return 0;
            }
            else if (payment >= 99) {
                cout << "Purchase Complete!\n";
                cout << "\n";
                cout << "You Ordered: [2] P150 - Fried Chicken\n";
                cout << "You Paid: "<<payment<<endl;
                cout << "Your Change is: "<<payment-100<<endl;
                cout << "Enjoy Your Meal!";
                return 0;
        }
        case 2:
            cout << "Selected: [2] P150 - Lumpia Shanghai\n";
            cout << "\n";
            cout << "To Checkout, Please Enter Amount To Pay.\n";
            cout << "To Cancel, Type the number 0.\n";
            cout << "\n";
            cout << "Enter Here: ";
            cin >> payment;
            cout << "\n";

            if (payment == 0) {
                cout << "Purchase Cancelled!";
                return 0;
            }
            else if (payment <= 149) {
                cout << "Purchase Failed: Insufficient Payment.";
                return 0;
            }
            else if (payment >= 149) {
                cout << "Purchase Complete!\n";
                cout << "\n";
                cout << "You Ordered: [2] P150 - Lumpia Shanghai\n";
                cout << "You Paid: "<<payment<<endl;
                cout << "Your Change is: "<<payment-150<<endl;
                cout << "Enjoy Your Meal!";
                return 0;
        }
        case 3:
            cout << "Selected: [3] P300 - Noodles with Halo-Halo\n";
            cout << "\n";
            cout << "To Checkout, Please Enter Amount To Pay.\n";
            cout << "To Cancel, Type the number 0.\n";
            cout << "\n";
            cout << "Enter Here: ";
            cin >> payment;
            cout << "\n";

            if (payment == 0) {
                cout << "Purchase Cancelled!";
                return 0;
            }
            else if (payment <= 299) {
                cout << "Purchase Failed: Insufficient Payment.";
                return 0;
            }
            else if (payment >= 299) {
                cout << "Purchase Complete!\n";
                cout << "\n";
                cout << "You Ordered: [3] P300 - Noodles with Halo-Halo\n";
                cout << "You Paid: "<<payment<<endl;
                cout << "Your Change is: "<<payment-300<<endl;
                cout << "Enjoy Your Meal!";
                return 0;
        }
        case 4:
            cout << "Selected: [4] P500 - Chinese Style Roasted Pork\n";
            cout << "\n";
            cout << "To Checkout, Please Enter Amount To Pay.\n";
            cout << "To Cancel, Type the number 0.\n";
            cout << "\n";
            cout << "Enter Here: ";
            cin >> payment;
            cout << "\n";

            if (payment == 0) {
                cout << "Purchase Cancelled!";
                return 0;
            }
            else if (payment <= 499) {
                cout << "Purchase Failed: Insufficient Payment.";
                return 0;
            }
            else if (payment >= 499) {
                cout << "Purchase Complete!\n";
                cout << "\n";
                cout << "You Ordered: [4] P500 - Chinese Style Roasted Pork\n";
                cout << "You Paid: "<<payment<<endl;
                cout << "Your Change is: "<<payment-500<<endl;
                cout << "Enjoy Your Meal!";
                return 0;
        }
        case 5:
            cout << "Selected: [5] P1000 - Baby Back Ribs with Roasted Pork\n";
            cout << "\n";
            cout << "To Checkout, Please Enter Amount To Pay.\n";
            cout << "To Cancel, Type the number 0.\n";
            cout << "\n";
            cout << "Enter Here: ";
            cin >> payment;
            cout << "\n";

            if (payment == 0) {
                cout << "Purchase Cancelled!";
                return 0;
            }
            else if (payment <= 999) {
                cout << "Purchase Failed: Insufficient Payment.";
                return 0;
            }
            else if (payment >= 999) {
                cout << "Purchase Complete!\n";
                cout << "\n";
                cout << "You Ordered: [5] P1000 - Baby Back Ribs with Roasted Pork\n";
                cout << "You Paid: "<<payment<<endl;
                cout << "Your Change is: "<<payment-1000<<endl;
                cout << "Enjoy Your Meal!";
                return 0;
        }
        default:
            cout << "Entered Value Not Available.\n";
            cout << "Try Again.";
            return 0;
    }
return 0;
}
