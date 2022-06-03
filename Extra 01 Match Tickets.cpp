#include <iostream>
using namespace std;



int main()
{
    double budget;
    string type;
    int people;

    cin >> budget >> type >> people;

    cout.setf(ios::fixed);
    cout.precision(2);

    double vipTicket = 499.99;
    double normalTicket = 249.99;
    double travelPrice = 0.0;
    double moneyLeft = 0.0;

    if (people >= 1 && people <= 4) {
        travelPrice = budget * 0.75;
    }
    else if (people >= 5 && people <= 9) {
        travelPrice = budget * 0.60;
    }
    else if (people >= 10 && people <= 24) {
        travelPrice = budget * 0.50;
    }
    else if (people >= 25 && people <= 49) {
        travelPrice = budget * 0.40;
    }
    else if (people >= 50) {
        travelPrice = budget * 0.25;
    }

    double difference = budget - travelPrice;
    double enoughOrNot = 0.0;

    if (type == "VIP") {
        enoughOrNot = difference - (vipTicket * people);
        if (enoughOrNot < 0) {
            cout << "Not enough money! You need " << abs(enoughOrNot) << " leva.";
        }
        else if (enoughOrNot >= 0) {
            cout << "Yes! You have " << enoughOrNot << " leva left.";
        }
    
    }
    else if (type == "Normal") {
        
        enoughOrNot = difference - (normalTicket * people);
        if (enoughOrNot < 0) {
            cout << "Not enough money! You need " << abs(enoughOrNot) << " leva.";
        }
        else if (enoughOrNot >= 0) {
            cout << "Yes! You have " << enoughOrNot << " leva left.";
        }

    
    }

}

