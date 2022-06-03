#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	string flower;
	int budget, amount;

	cin >> flower >> amount >> budget;
	
	double price = 0.0;
	double discount = 0.0;
	double more = 0.0;

	cout.setf(ios::fixed);
	cout.precision(2);

	if (flower == "Roses") {
		price = 5;
	}
	else if (flower == "Dahlias") {
		price = 3.80;
	}
	else if (flower == "Tulips") {
		price = 2.80;
	}
	else if (flower == "Narcissus") {
		price = 3.00;
	}
	else if (flower == "Gladiolus") {
		price = 2.50;
	}

	double totalPrice = amount * price;

	if (amount > 80 && flower == "Roses") {
		discount = 0.10;
	}
	else if (amount > 90 && flower == "Dahlias") {
		discount = 0.15;
	}
	else if (amount > 80 && flower == "Tulips") {
		discount = 0.15;
	}
	else if (amount < 120 && flower == "Narcissus") {
		more = 0.15;
	}
	else if (amount < 80 && flower == "Gladiolus") {
		more = 0.20;
	}
	
	if (discount != 0) {
		totalPrice = totalPrice - (totalPrice * discount);
	}
	else if (more != 0) {
		totalPrice = totalPrice + (totalPrice * more);
	}

	double difference = budget - totalPrice;

	if (difference >= 0) {
		cout << "Hey, you have a great garden with " << amount << " " << flower << " and " << difference << " leva left.";
	}
	else if (difference < 0) {
		cout << "Not enough money, you need " << abs(difference) << " leva more.";
	}
}

