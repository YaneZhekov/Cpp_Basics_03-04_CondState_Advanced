#include <iostream>
using namespace std;


int main()
{
    int n1, n2;
    char operation;

    cin >> n1 >> n2 >> operation;
    int result;

    if (n2 == 0) {
        cout << "Cannot divide " << n1 << " by zero";
        return 0;
    }

    if ((operation == '+') || (operation == '-') || (operation == '*')){ 

        if (operation == '+') {
            result = n1 + n2;
        }
        else if (operation == '-') {
            result = n1 - n2;
        }
        else if (operation == '*') {
            result = n1 * n2;
        }

        if (result % 2 == 0) {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - even";
        }
        else if (result % 2 != 0) {
            cout << n1 << " " << operation << " " << n2 << " = " << result << " - odd";
        }
        
    }
    else if (operation == '/') {

        double doubleResult = (double)n1 / n2;

        cout.setf(ios::fixed);
        cout.precision(2);

        cout << n1 << " " << operation << " " << n2 << " = " << doubleResult;


    }
    else if (operation == '%') {

        result = n1 % n2;

        cout << n1 << " " << operation << " " << n2 << " = " << result;

    }
}

