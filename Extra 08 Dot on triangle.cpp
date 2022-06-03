#include <iostream>
using namespace std;



int main()
{
    double x1, y1, x2, y2, x, y;

    cin >> x1 >> y1 >> x2 >> y2 >> x >> y;

    bool xValue = (x == x1 || x == x2) && (y >= y1 && y <= y2);
    bool yValue = (y == y1 || y == y2) && (x >= x1 && x <= x2);

    if (xValue || yValue) {
        cout << "Border";
    }
    else {
        cout << "Inside / Outside";
    }
}

