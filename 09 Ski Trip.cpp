#include <iostream>
#include <string>
using namespace std;



int main()
{
    int days;
    string roomType, rating;

    cin >> days;
    getline(cin >> ws, roomType);
    cin >> rating;
    
    double pricePerson = 0.0;
    double priceApartment = 0.0;
    double pricePresident = 0.0;

    int nights = days - 1;
    
    cout.setf(ios::fixed);
    cout.precision(2);

    if (days < 10) {

        if (roomType == "room for one person") {
            
            pricePerson = 18.00 * nights;
        }
        else if (roomType == "apartment") {
            
            priceApartment = 25.00 * nights * 0.70;
        }
        else if (roomType == "president apartment") {

            pricePresident = 35.00 * nights * 0.90;
        }

    }
    else if (days >= 10 && nights <=15) {

        if (roomType == "room for one person") {

            pricePerson = 18.00 * nights;
        }
        else if (roomType == "apartment") {

            priceApartment = 25.00 * nights * 0.65;
        }
        else if (roomType == "president apartment") {

            pricePresident = 35.00 * nights * 0.85;
        }

    }
    else if (days > 15) {

        if (roomType == "room for one person") {

            pricePerson = 18.00 * nights;
        }
        else if (roomType == "apartment") {

            priceApartment = 25.00 * nights * 0.50;
        }
        else if (roomType == "president apartment") {

            pricePresident = 35.00 * nights * 0.80;
        }

    }
    if (rating == "positive") {
        
        pricePerson = pricePerson + (pricePerson * 0.25);
        priceApartment = priceApartment + (priceApartment * 0.25);
        pricePresident = pricePresident + (pricePresident * 0.25);

    }
    else if (rating == "negative") {
        
        pricePerson = pricePerson - (pricePerson * 0.10);
        priceApartment = priceApartment - (priceApartment * 0.10);
        pricePresident = pricePresident - (pricePresident * 0.10);

    }

    if (roomType == "room for one person") {
        cout << pricePerson;
    }
    else if (roomType == "apartment") {
        cout << priceApartment;
    }
    else if (roomType == "president apartment") {
        cout << pricePresident;
    }
}

