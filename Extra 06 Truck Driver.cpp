#include <iostream>
using namespace std;


int main()
{
    string season;
    double kmAmount;

    cin >> season >> kmAmount;

    double total = 0.0;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    double seasonKm = kmAmount * 4;

    if (kmAmount <= 5000) {

        if (season == "Spring" || season == "Autumn") {
            total = seasonKm * 0.75;
        }
        else if (season == "Summer") {
            total = seasonKm * 0.90;
        }
        else if (season == "Winter") {
            total = seasonKm * 1.05;
        }

    }
    else if (kmAmount > 5000 && kmAmount <= 10000) {

        if (season == "Spring" || season == "Autumn") {
            total = seasonKm * 0.95;
        }
        else if (season == "Summer") {
            total = seasonKm * 1.10;
        }
        else if (season == "Winter") {
            total = seasonKm * 1.25;
        }


    }
    else if (kmAmount > 10000 && kmAmount <= 20000) {

        total = seasonKm * 1.45;
    }

    total = total * 0.90;

    cout << total;

}

