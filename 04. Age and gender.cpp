#include <iostream>
using namespace std;


int main()
{
    double age;
    string morf;

    cin >> age >> morf;

    if (morf == "m") {

        if (age >= 16) {
            cout << "Mr.";
        }
        else if (age < 16) {
            cout << "Master";
        }
    }
    else if (morf == "f") {

        if (age >= 16) {
            cout << "Ms.";
        }
        else if (age < 16) {
            cout << "Miss";
        }
    }
}
