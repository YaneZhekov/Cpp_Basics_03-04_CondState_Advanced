#include <iostream>
using namespace std;

int main()
{
    double budget;
    string season, destination;

    cin >> budget >> season;

    cout.setf(ios::fixed);
    cout.precision(2);
    
    string camporhotel;

    if (budget <= 100) {

        destination = "Bulgaria";
        if (season == "summer") {
            double price = budget * 0.3;
            camporhotel = "Camp";
            cout << "Somewhere in " << destination << endl << camporhotel << " - " << price;
        }
        else if (season == "winter") {
            double price = budget * 0.7;
            camporhotel = "Hotel";
            cout << "Somewhere in " << destination << endl << camporhotel << " - " << price;

        }

    }
    else if (budget <= 1000) {

        destination = "Balkans";

        if (season == "summer") {
            double price = budget * 0.4;
            camporhotel = "Camp";
            cout << "Somewhere in " << destination << endl << camporhotel << " - " << price;

        }
        else if (season == "winter") {
            double price = budget * 0.8;
            camporhotel = "Hotel";
            cout << "Somewhere in " << destination << endl << camporhotel << " - " << price;
        }

    }
    else if (budget > 1000) {

        destination = "Europe";

        double price = budget * 0.9;
        camporhotel = "Hotel";
        cout << "Somewhere in " << destination << endl << camporhotel << " - " << price;

    }

}

