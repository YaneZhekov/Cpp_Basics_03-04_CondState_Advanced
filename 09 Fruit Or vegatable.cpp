#include <iostream>
using namespace std;


int main()
{
    string word;

    cin >> word;

    if (word == "banana" || word == "apple" || word == "kiwi" || word == "cherry" || word == "lemon" || word == "grapes") {
        cout << "fruit";
    }
    else if (word == "tomato" || word == "cucumber" || word == "pepper" || word == "carrot") {
        cout << "vegetable";
    }
    else {
        cout << "unknown";
    }
}

