#include <iostream>
using namespace std;


int main()
{
    string fruit, day;
    double amount;

    cin >> fruit >> day >> amount;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (day == "Monday" || day == "Tuesday"
        || day == "Wednesday" || day == "Thursday"
        || day == "Friday") {

        if (fruit == "banana") {
            cout << amount * 2.50;
        }
        else if (fruit == "apple") {
            cout << amount * 1.20;
        }
        else if (fruit == "orange") {
            cout << amount * 0.85;
        }
        else if (fruit == "grapefruit") {
            cout << amount * 1.45;
        }
        else if (fruit == "kiwi") {
            cout << amount * 2.70;
        }
        else if (fruit == "pineapple") {
            cout << amount * 5.50;
        }
        else if (fruit == "grapes") {
            cout << amount * 3.85;
        }
        else {
            cout << "error";
        }

    }
    else if (day == "Saturday" || day == "Sunday") {
        
        if (fruit == "banana") {
            cout << amount * 2.70;
        }
        else if (fruit == "apple") {
            cout << amount * 1.25;
        }
        else if (fruit == "orange") {
            cout << amount * 0.90;
        }
        else if (fruit == "grapefruit") {
            cout << amount * 1.60;
        }
        else if (fruit == "kiwi") {
            cout << amount * 3.00;
        }
        else if (fruit == "pineapple") {
            cout << amount * 5.60;
        }
        else if (fruit == "grapes") {
            cout << amount * 4.20;
        }
        else {
            cout << "error";
        }

    }
    else {
        cout << "error";
    }
        
}