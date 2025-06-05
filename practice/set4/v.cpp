#include <iostream>
using namespace std;

struct Time {
    int nHours;
    int nMinutes;
    int nSeconds;
};

struct DateTime {
    int nDay;
    int nMonth;
    int nYear;
    Time t;
};

void increase_seconds(DateTime &dt) {
    dt.t.nSeconds++;
    if (dt.t.nSeconds >= 60) {
        dt.t.nSeconds = 0;
        dt.t.nMinutes++;
        if (dt.t.nMinutes >= 60) {
            dt.t.nMinutes = 0;
            dt.t.nHours++;
            if (dt.t.nHours >= 24) {
                dt.t.nHours = 0;
                dt.nDay++;
                // Simplified date increment logic, not accounting for month/year changes
            }
        }
    }
}

int main() {
    DateTime dt = {28, 5, 2025, {17, 48, 35}}; // Example date and time

    int n = 10; // Number of seconds to increment
    for (int i = 0; i < n; i++) {
        increase_seconds(dt);
    }

    cout << "Date: " << dt.nDay << "/" << dt.nMonth << "/" << dt.nYear << " Time: " << dt.t.nHours << ":" << dt.t.nMinutes << ":" << dt.t.nSeconds << endl;

    return 0;
}
