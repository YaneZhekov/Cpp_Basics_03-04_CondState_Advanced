#include <iostream>
using namespace std;

int main()
{
    string month;
    int nights;

    cin >> month >> nights;

    cout.setf(ios::fixed);
    cout.precision(2);

    double studioPrice = 0.0;
    double apartmentPrice = 0.0;

    if (month == "May" || month == "October") {
        studioPrice = 50;
        apartmentPrice = 65;
    }
    else if (month == "June" || month == "September") {
        studioPrice = 75.20;
        apartmentPrice = 68.70;
    }
    else if (month == "July" || month == "August") {
        studioPrice = 76;
        apartmentPrice = 77;
    }

    double totalPriceStudio = nights * studioPrice;
    double totalPriceApartment = nights * apartmentPrice;

    if (nights > 7 && nights <= 14) {
        
        if (month == "May" || month == "October") {
            totalPriceStudio = totalPriceStudio * 0.95;
        }


    }
    else if (nights > 14) {

        if (month == "May" || month == "October") {
            totalPriceStudio = totalPriceStudio * 0.70;
            totalPriceApartment = totalPriceApartment * 0.90;
        }
        else if (month == "June" || month == "September") {
            totalPriceStudio = totalPriceStudio * 0.80;
            totalPriceApartment = totalPriceApartment * 0.90;
        }
        else {
            totalPriceApartment = totalPriceApartment * 0.90;
        }
    }
    
    cout << "Apartment: " << totalPriceApartment << " lv." << endl;
    cout << "Studio: " << totalPriceStudio << " lv.";
}
