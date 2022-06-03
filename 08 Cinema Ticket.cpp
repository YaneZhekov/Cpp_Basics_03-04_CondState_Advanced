#include <iostream>
using namespace std;


int main()
{
    string dayOfWeek;

    cin >> dayOfWeek;

    if (dayOfWeek == "Monday" || dayOfWeek == "Tuedsay" || dayOfWeek == "Friday") 
    {
        cout << 12 << endl;
    }
    else if (dayOfWeek == "Wednesday" || dayOfWeek == "Thursday") 
    {
        cout << 14 << endl;
    }
    else if (dayOfWeek == "Saturday" || dayOfWeek == "Sunday") 
    {
        cout << 16 << endl;
    }
    return 0;
}
