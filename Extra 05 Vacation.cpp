#include <iostream>
using namespace std;


int main()
{
    double budget;
    string season;

    cin >> budget >> season;

    cout.setf(ios::fixed);
    cout.precision(2);

    double price = 0.0;

    if (budget <= 1000) {
        
        if (season == "Summer") {
            price = budget * 0.65;
            cout << "Alaska - Camp - " << price;
        }
        else if (season == "Winter") {
            price = budget * 0.45;
            cout << "Morocco - Camp - " << price;
        }
    }
    else if (budget > 1000 && budget <= 3000) {

        if (season == "Summer") {
            price = budget * 0.80;
            cout << "Alaska - Hut - " << price;
        }
        else if (season == "Winter") {
            price = budget * 0.60;
            cout << "Morocco - Hut - " << price;
        }

    }
    else if (budget > 3000) {

        if (season == "Summer") {
            price = budget * 0.90;
            cout << "Alaska - Hotel - " << price;
        }
        else if (season == "Winter") {
            price = budget * 0.90;
            cout << "Morocco - Hotel - " << price;
        }
    }
}
