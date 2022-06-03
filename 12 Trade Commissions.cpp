#include <iostream>
using namespace std;

int main()
{
	string town;
	double itemsSold;

	cin >> town >> itemsSold;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (town == "Sofia") {

		if (itemsSold >= 0 && itemsSold <= 500) {
			cout << itemsSold * 0.05;
		}
		else if (itemsSold > 500 && itemsSold <= 1000) {
			cout << itemsSold * 0.07;
		}
		else if (itemsSold > 1000 && itemsSold <= 10000) {
			cout << itemsSold * 0.08;
		}
		else if (itemsSold > 10000) {
			cout << itemsSold * 0.12;
		}
		else {
			cout << "error";
		}
	}
	else if (town == "Varna") {
		
		if (itemsSold >= 0 && itemsSold <= 500) {
			cout << itemsSold * 0.045;
		}
		else if (itemsSold > 500 && itemsSold <= 1000) {
			cout << itemsSold * 0.075;
		}
		else if (itemsSold > 1000 && itemsSold <= 10000) {
			cout << itemsSold * 0.10;
		}
		else if (itemsSold > 10000) {
			cout << itemsSold * 0.13;
		}
		else {
			cout << "error";
		}
	}
	else if (town == "Plovdiv") {

		if (itemsSold >= 0 && itemsSold <= 500) {
			cout << itemsSold * 0.055;
		}
		else if (itemsSold > 500 && itemsSold <= 1000) {
			cout << itemsSold * 0.08;
		}
		else if (itemsSold > 1000 && itemsSold <= 10000) {
			cout << itemsSold * 0.12;
		}
		else if (itemsSold > 10000) {
			cout << itemsSold * 0.145;
		}
		else {
			cout << "error";
		}
	}
	else {
		cout << "error";
	}
}

