#include <iostream>
using namespace std;




int main() {
		
	double budget;
	string season;

	cin >> budget >> season;

	double price = 0.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (budget <= 100) {
		cout << "Economy class" << endl;
		if (season == "Summer") {
			price = budget * 0.35;
			cout << "Cabrio - " << price;
		}
		else if (season == "Winter") {
			price = budget * 0.65;
			cout << "Jeep - " << price;
		}
	}
	else if (budget > 100 && budget <= 500) {
		cout << "Compact class" << endl;
		if (season == "Summer") {
			price = budget * 0.45;
			cout << "Cabrio - " << price;
		}
		else if (season == "Winter") {
			price = budget * 0.80;
			cout << "Jeep - " << price;
		}
	}
	else if (budget > 500) {
		cout << "Luxury class" << endl;

		if (season == "Summer" || season == "Winter") {
			price = budget * 0.90;
			cout << "Jeep - " << price;
		}

	}

}