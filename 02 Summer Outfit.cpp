#include <iostream>
using namespace std;


int main()
{
    int temperature;
    string timeOfDay;

    cin >> temperature >> timeOfDay;

    if (timeOfDay == "Morning") {

        if (temperature >= 10 && temperature <= 18) {

            cout << "It's " << temperature << " degrees, get your Sweatshirt and Sneakers.";
        }
        else if (temperature > 18 && temperature <= 24) {

            cout << "It's " << temperature << " degrees, get your Shirt and Moccasins.";

        }
        else if (temperature >= 25) {

            cout << "It's " << temperature << " degrees, get your T-Shirt and Sandals.";

        }
    }
    else if (timeOfDay == "Afternoon") {
        
        if (temperature >= 10 && temperature <= 18) {

            cout << "It's " << temperature << " degrees, get your Shirt and Moccasins.";

        }
        else if (temperature > 18 && temperature <= 24) {

            cout << "It's " << temperature << " degrees, get your T-Shirt and Sandals.";

        }
        else if (temperature >= 25) {

            cout << "It's " << temperature << " degrees, get your Swim Suit and Barefoot.";

        }
    }
    else if (timeOfDay == "Evening") {

        if (temperature >= 10 && temperature <= 18) {

            cout << "It's " << temperature << " degrees, get your Shirt and Moccasins.";

        }
        else if (temperature > 18 && temperature <= 24) {

            cout << "It's " << temperature << " degrees, get your Shirt and Moccasins.";

        }
        else if (temperature >= 25) {

            cout << "It's " << temperature << " degrees, get your Shirt and Moccasins.";

        }
    }
}

