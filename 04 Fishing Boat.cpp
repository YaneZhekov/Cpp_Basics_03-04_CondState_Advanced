#include <iostream>
using namespace std;
//•	Цената за наем на кораба през пролетта е  3000 лв.
//•	Цената за наем на кораба през лятото и есента е  4200 лв.
//•	Цената за наем на кораба през зимата е  2600 лв.

//•	Ако групата е до 6 човека включително  –  отстъпка от 10%.
//•	Ако групата е от 7 до 11 човека включително  –  отстъпка от 15 % .
//•	Ако групата е от 12 нагоре  –  отстъпка от 25 % .

//Рибарите ползват допълнително 5% отстъпка, ако са четен брой освен ако не е есен - тогава нямат допълнителна отстъпка, която се начислява след като се приспадне отстъпката по горните критерии.
// Напишете програма, която да пресмята дали рибарите ще съберат достатъчно пари.


int main()
{
    int budget, fishers;
    string season;

    cin >> budget >> season >> fishers;

    double boatPrice; 

    if (season == "Spring") {
        boatPrice = 3000;
    }
    else if (season == "Summer") {
        boatPrice = 4200;
    }
    else if (season == "Autumn") {
        boatPrice = 4200;
    }
    else if (season == "Winter") {
        boatPrice = 2600;
    }
    
    if (fishers <= 6) {
        boatPrice -= boatPrice * 0.1;
    }
    else if (fishers >= 7 && fishers <= 11) {
        boatPrice -= boatPrice * 0.15;
    }
    else if (fishers >= 12) {
        boatPrice -= boatPrice * 0.25;
    }

    if (fishers % 2 == 0 && season != "Autumn") {
        boatPrice -= boatPrice * 0.05;
    }

    double difference = budget - boatPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference >= 0) {
        cout << "Yes! You have " << difference << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << abs(difference) << " leva." << endl;
    }

}

