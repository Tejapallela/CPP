/*. Write a program to read n strings in an array and print the no: of vowels, consonants 
and digits in each string in the main.. Declare a 2-dimensional char type matrix.*/
#include <iostream>
using namespace std;

void countCharacters(char str[], int &vowels, int &consonants, int &digits) {
    vowels = consonants = digits = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        if (isalpha(str[i])) {
            char ch = tolower(str[i]);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                ++vowels;
            } else {
                ++consonants;
            }
        } else if (isdigit(str[i])) {
            ++digits;
        }
    }
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;
    cin.ignore(); // To ignore the newline character after the number input

    char strings[n][100];
    for (int i = 0; i < n; ++i) {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(strings[i], 100);
    }

    for (int i = 0; i < n; ++i) {
        int vowels, consonants, digits;
        countCharacters(strings[i], vowels, consonants, digits);
        cout << "String " << i + 1 << " has " << vowels << " vowels, " << consonants << " consonants, and " << digits << " digits.\n";
    }

    return 0;
}
