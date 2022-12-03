#include <iostream>
using namespace std;
int main(){

    //Adjust the number of variables depending on the number of the values inside of the array
    int n, n1, n2, n3, n4, n5, n6, n7, n8, n9, n10;

    //Change the value of n depending on the number of values inside of the array
    n = 10;

    cout << "Enter the values of the aray" << endl;
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8 >> n9 >> n10;

    int arr[]={n1, n2, n3, n4, n5, n6, n7, n8, n9, n10};

    cout << "" << endl;
    cout << "The values inside the array are the following" << endl;

    int i=0;
    while(i<n){
        cout << arr[i]<<endl;
        i++;
    }
}
