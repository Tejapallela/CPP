#include <iostream>
using namespace std;

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < rows - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int k = 0; k < 2 * i + 1; k++) {
            cout << "*";
        }
        // Move to the next line
        cout << endl;
    }

    return 0;
}
