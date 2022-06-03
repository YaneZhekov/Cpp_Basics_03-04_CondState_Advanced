#include <iostream>
using namespace std;


int main()
{
    int examHour, examMinute, arriveHour, arriveMinute;

    cin >> examHour >> examMinute >> arriveHour >> arriveMinute;

    int examInMinutes = examHour * 60 + examMinute;
    int arriveInMinutes = arriveHour * 60 + arriveMinute;

    int timeDifference = arriveInMinutes - examInMinutes;
                        // 2:00     -     2:30
    if (timeDifference >= -30 && timeDifference <= 0) {
        
        cout << "On time" << endl;

        int hours = abs(timeDifference) / 60;
        int minutes = abs(timeDifference) % 60;
        
        if (hours <= 0) {
            cout << minutes << " minutes before the start";
        }
        else if (hours > 0) {
            if (minutes < 10) {
                cout << hours << ":0" << minutes 
                    << " hours before the start";
            }
            else {
                cout << hours << ":" << minutes
                    << " hours before the start";
            }
        }
        else if (hours == 0 && minutes == 0) {
            return 0;
        }


    }
    else if (timeDifference >= 1) {
        
        cout << "Late" << endl;
        
        int hours = timeDifference / 60;
        int minutes = timeDifference % 60;
        
        if (hours <= 0) {
            cout << minutes << " minutes after the start";
        }
        else if (hours > 0) {
            if (minutes < 10) {
                cout << hours << ":0" << minutes
                    << " hours after the start";
            }
            else {
                cout << hours << ":" << minutes
                    << " hours after the start";
            }
        }
        
    }
    else if (timeDifference < -30) {
        
        
        cout << "Early" << endl;

        int hours = abs(timeDifference) / 60;
        int minutes = abs(timeDifference) % 60;
        if (hours <= 0) {
            cout << minutes << " minutes before the start";
        }
        else if (hours > 0) {
            if (minutes < 10) {
                cout << hours << ":0" << minutes
                    << " hours before the start";
            }
            else {
                cout << hours << ":" << minutes
                    << " hours before the start";
            }
        }
    }
}

