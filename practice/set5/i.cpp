#include <iostream>
using namespace std;

// Function to count odd and even elements
void countOddEven(int* arr, int n, int &oddCount, int &evenCount) {
    oddCount = 0;
    evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    // Dynamically allocate memory for n elements
    int* arr = new int[n];

    // Read n elements into the array
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int oddCount, evenCount;
    countOddEven(arr, n, oddCount, evenCount);

    // Print the counts of odd and even elements
    cout << "Number of odd elements: " << oddCount << endl;
    cout << "Number of even elements: " << evenCount << endl;

    // Free the allocated memory
    delete[] arr;

    return 0;
}
