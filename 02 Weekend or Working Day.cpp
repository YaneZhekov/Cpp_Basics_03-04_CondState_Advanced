#include <iostream>
using namespace std;

int main()
{
    string day;

    cin >> day;

    if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday") {
        
        cout << "Working day";
    }
    else if (day == "Sunday" || day == "Saturday") {
        
        cout << "Weekend";
    }
    else {
        
        cout << "Error";
    }
}

