#include <iostream>
using namespace std;


int main()
{
    int hrizAmount, roseAmount, laleAmount;
    string season, answer;

    cin >> hrizAmount >> roseAmount >> laleAmount >> season >> answer;

    cout.setf(ios::fixed);
    cout.precision(2);

    double priceHriz = 0.0;
    double priceRose = 0.0;
    double priceLale = 0.0;
    
    if (season == "Spring" || season == "Summer") {
        
        priceHriz = 2.00 * hrizAmount;
        priceRose = 4.10 * roseAmount;
        priceLale = 2.50 * laleAmount;
    }
    else if (season == "Autumn" || season == "Winter") {
        
        priceHriz = 3.75 * hrizAmount;
        priceRose = 4.50 * roseAmount;
        priceLale = 4.15 * laleAmount;
    }

    double totalPrice = priceHriz + priceRose + priceLale;
    double totalAmount = hrizAmount + roseAmount + laleAmount;

    
    if (totalAmount > 20) {

        if (laleAmount > 7 && season == "Spring") {
            totalPrice = totalPrice * 0.95;
        }
        else if (roseAmount >= 10 && season == "Winter") {
            totalPrice = totalPrice * 0.90;
        }
        totalPrice = totalPrice * 0.80;
    }
    else {

        if (laleAmount > 7 && season == "Spring") {
            totalPrice = totalPrice * 0.95;
        }
        else if (roseAmount >= 10 && season == "Winter") {
            totalPrice = totalPrice * 0.90;
        }

    }
    
    
    if (answer == "Y") {

        totalPrice = totalPrice * 1.15;
    }
    else if (answer == "N") {

        totalPrice;
    }

    cout << totalPrice + 2;


}
