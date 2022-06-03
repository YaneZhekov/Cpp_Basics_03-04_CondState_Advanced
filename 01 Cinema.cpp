#include <iostream>
using namespace std;

int main()
{
    string movieType;
    int rows, colons;

    cin >> movieType >> rows >> colons;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (movieType == "Premiere") {
        
        cout << rows * colons * 12.00;
    }
    else if (movieType == "Normal") {
        
        cout << rows * colons * 7.5;
    }
    else if (movieType == "Discount") {

        cout << rows * colons * 5.00;
    }
}

