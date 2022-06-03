#include <iostream>
using namespace std;

int main()
{
	string product, town;
	double amount;

	cin >> product >> town >> amount;

	if (town == "Sofia") {
		if (product == "coffee") {
			cout << amount * 0.50;
		}
		else if (product == "water") {
			cout << amount * 0.80;
		}
		else if (product == "beer") {
			cout << amount * 1.20;
		}
		else if (product == "sweets") {
			cout << amount * 1.45;
		}
		else if (product == "peanuts") {
			cout << amount * 1.60;
		}
	}
	else if (town == "Varna") {
		if (product == "coffee") {
			cout << amount * 0.45;
		}
		else if (product == "water") {
			cout << amount * 0.70;
		}
		else if (product == "beer") {
			cout << amount * 1.10;
		}
		else if (product == "sweets") {
			cout << amount * 1.35;
		}
		else if (product == "peanuts") {
			cout << amount * 1.55;
		}
	}
	else if (town == "Plovdiv") {
		if (product == "coffee") {
			cout << amount * 0.40;
		}
		else if (product == "water") {
			cout << amount * 0.70;
		}
		else if (product == "beer") {
			cout << amount * 1.15;
		}
		else if (product == "sweets") {
			cout << amount * 1.30;
		}
		else if (product == "peanuts") {
			cout << amount * 1.50;
		}
	}
}

