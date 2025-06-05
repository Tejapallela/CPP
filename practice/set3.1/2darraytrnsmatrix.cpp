#include <iostream>
using namespace std;

void transposeMatrix(int matrix[][100], int transposed[][100], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[100][100], transposed[100][100];

    cout << "Enter the elements of the matrix row-wise:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> matrix[i][j];
        }
    }

    transposeMatrix(matrix, transposed, rows, cols);

    cout << "Transposed Matrix:\n";
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transposed[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
