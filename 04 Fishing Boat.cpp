#include <iostream>
using namespace std;
//�	������ �� ���� �� ������ ���� �������� �  3000 ��.
//�	������ �� ���� �� ������ ���� ������ � ������ �  4200 ��.
//�	������ �� ���� �� ������ ���� ������ �  2600 ��.

//�	��� ������� � �� 6 ������ �����������  �  �������� �� 10%.
//�	��� ������� � �� 7 �� 11 ������ �����������  �  �������� �� 15 % .
//�	��� ������� � �� 12 ������  �  �������� �� 25 % .

//�������� ������� ������������ 5% ��������, ��� �� ����� ���� ����� ��� �� � ���� - ������ ����� ������������ ��������, ����� �� ��������� ���� ���� �� ��������� ���������� �� ������� ��������.
// �������� ��������, ����� �� �������� ���� �������� �� ������� ���������� ����.


int main()
{
    int budget, fishers;
    string season;

    cin >> budget >> season >> fishers;

    double boatPrice; 

    if (season == "Spring") {
        boatPrice = 3000;
    }
    else if (season == "Summer") {
        boatPrice = 4200;
    }
    else if (season == "Autumn") {
        boatPrice = 4200;
    }
    else if (season == "Winter") {
        boatPrice = 2600;
    }
    
    if (fishers <= 6) {
        boatPrice -= boatPrice * 0.1;
    }
    else if (fishers >= 7 && fishers <= 11) {
        boatPrice -= boatPrice * 0.15;
    }
    else if (fishers >= 12) {
        boatPrice -= boatPrice * 0.25;
    }

    if (fishers % 2 == 0 && season != "Autumn") {
        boatPrice -= boatPrice * 0.05;
    }

    double difference = budget - boatPrice;

    cout.setf(ios::fixed);
    cout.precision(2);

    if (difference >= 0) {
        cout << "Yes! You have " << difference << " leva left." << endl;
    }
    else
    {
        cout << "Not enough money! You need " << abs(difference) << " leva." << endl;
    }

}

