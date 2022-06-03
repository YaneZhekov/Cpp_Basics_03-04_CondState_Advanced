#include <iostream>
#include <string>
using namespace std;


int main()
{
	int youngBikers, oldBikers;
	string raceType;

	cin >> youngBikers >> oldBikers;
	getline(cin >> ws, raceType);

	cout.setf(ios::fixed);
	cout.precision(2);

	double priceYoung = 0.0;
	double priceOld = 0.0;
	double totalAmount = youngBikers + oldBikers;

	if (raceType == "trail") {

		priceYoung = 5.50 * youngBikers;
		priceOld = 7 * oldBikers;
	}
	else if (raceType == "cross-country") {
		priceYoung = 8 * youngBikers;
		priceOld = 9.50 * oldBikers;

	}
	else if (raceType == "downhill") {
		priceYoung = 12.25 * youngBikers;
		priceOld = 13.75 * oldBikers;

	}
	else if (raceType == "road") {
		priceYoung = 20 * youngBikers;
		priceOld = 21.50 * oldBikers;

	}
	
	double totalSum = priceYoung + priceOld;

	if (totalAmount >= 50 && raceType == "cross-country") {
		double totalDonation = totalSum * 0.75;
		totalDonation = totalDonation * 0.95;
		cout << totalDonation;
	}
	else {
		totalSum = totalSum * 0.95;
		cout << totalSum;
	}
}

