#include <iostream>
using namespace std;


int main()
{
    double value = 0;
    while (value >= 0) {
        cin >> value;

        cout.setf(ios::fixed);
        cout.precision(2);

        if (value >= 0) {
            value = value * 2;
            cout << "Result: " << value << endl;
        }
        else {
            cout << "Negative number!";
        }

    }
}

