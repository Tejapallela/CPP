#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += factorial(i);
    }

    cout << "Sum of factorials of first " << n << " numbers is: " << sum << endl;

    return 0;
}
