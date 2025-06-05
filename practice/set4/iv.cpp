#include <iostream>
using namespace std;

struct coin {
    int nDenominations;
    int nCount;
};

void initialize(coin coins[]) {
    coins[0].nDenominations = 500; // Rs.5
    coins[1].nDenominations = 200; // Rs.2
    coins[2].nDenominations = 100; // Re.1
    coins[3].nDenominations = 50;  // 50ps
    coins[4].nDenominations = 25;  // 25ps

    for (int i = 0; i < 5; i++) {
        coins[i].nCount = 0;
    }
}

void calculate(coin coins[], int amount) {
    for (int i = 0; i < 5; i++) {
        coins[i].nCount = amount / coins[i].nDenominations;
        amount %= coins[i].nDenominations;
    }
}

void display(coin coins[]) {
    for (int i = 0; i < 5; i++) {
        cout << "Denomination: Rs." << coins[i].nDenominations / 100 << " Count: " << coins[i].nCount << endl;
    }
}

struct time {
    int nHours;
    int nMinutes;
    int nSeconds;
};

struct date_time {
    int nDay;
    int nMonth;
    int nYear;
    struct time t;
};

void increase_seconds(date_time &dt) {
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
    // Task iv: Coin Structure and Functions
    coin coins[5];
    initialize(coins);

    int amount = 725; // Example amount Rs.7.25
    calculate(coins, amount);
    display(coins);

    // Task v: Date and Time Structure
    date_time dt = {28, 5, 2025, {17, 48, 35}}; // Example date and time

    int n = 10; // Number of seconds to increment
    for (int i = 0; i < n; i++) {
        increase_seconds(dt);
    }

    cout << "Date: " << dt.nDay << "/" << dt.nMonth << "/" << dt.nYear << " Time: " << dt.t.nHours << ":" << dt.t.nMinutes << ":" << dt.t.nSeconds << endl;

    return 0;
}
