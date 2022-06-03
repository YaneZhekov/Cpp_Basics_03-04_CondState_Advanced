#include <iostream>
using namespace std;


int main()
{
    string season, gender;
    int students, nights;

    cin >> season >> gender >> students >> nights;

    cout.setf(ios::fixed);
    cout.precision(2);

    double priceGirlsBoys = 0.0;
    double priceMixed = 0.0;

    if (season == "Winter") {
        
        if (gender == "boys") {
            priceGirlsBoys = 9.60 * students * nights;
            cout << "Judo ";
        }
        else if (gender == "mixed") {
            priceMixed = 10 * students * nights;
            cout << "Ski ";
        }
        else if (gender == "girls") {
            priceGirlsBoys = 9.60 * students * nights;
            cout << "Gymnastics ";
        }

    }
    else if (season == "Spring") {

        if (gender == "boys") {
            priceGirlsBoys = 7.20 * students * nights;
            cout << "Tennis ";
        }
        else if (gender == "mixed") {
            priceMixed = 9.50 * students * nights;
            cout << "Cycling ";
        }
        else if (gender == "girls") {
            priceGirlsBoys = 7.20 * students * nights;
            cout << "Athletics ";
        }

    }
    else if (season == "Summer") {

        if (gender == "boys") {
            priceGirlsBoys = 15 * students * nights;
            cout << "Football ";
        }
        else if (gender == "mixed") {
            priceMixed = 20 * students * nights;
            cout << "Swimming ";
        }
        else if (gender == "girls") {
            priceGirlsBoys = 15 * students * nights;
            cout << "Volleyball ";
        }

    }

    double discount = 0.0;

    if (students >= 10 && students < 20) {
        discount = 0.05;
    }
    else if (students >= 20 && students < 50) {
        discount = 0.15;
    }
    else if (students >= 50) {
        discount = 0.5;
    }

    if (discount != 0) {
        priceGirlsBoys = priceGirlsBoys - (priceGirlsBoys * discount);
        priceMixed = priceMixed - (priceMixed * discount);
    }
    if (gender == "girls" || gender == "boys") {
        cout << priceGirlsBoys << " lv.";
    }
    else if (gender == "mixed") {
        cout << priceMixed << " lv.";
    }
    
}
