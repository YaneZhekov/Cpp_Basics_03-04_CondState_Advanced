#include <iostream>
using namespace std;


int main()
{
	int hour;
	string day;

	cin >> hour >> day;

	if (day == "Monday" || day == "Tuesday" || day == "Wednesday" || day == "Thursday" || day == "Friday" || day == "Saturday") {
		if (hour >= 10 && hour <= 18) {
			cout << "open";
		}
		else {
			cout << "closed";
		}
	}
	else if (day == "Sunday") {
		cout << "closed";
	}
}

