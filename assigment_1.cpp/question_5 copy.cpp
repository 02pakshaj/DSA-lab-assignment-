#include <iostream>
using namespace std;

const int MAX = 10;

void sumRowCol(int matrix[][MAX], int rows, int cols) {
    // Sum of each row
    for (int i = 0; i < rows; i++) {
        int sumRow = 0;
        for (int j = 0; j < cols; j++) {
            sumRow += matrix[i][j];
        }
        cout << "Sum of row " << i << " = " << sumRow << endl;
    }

    // Sum of each column
    for (int j = 0; j < cols; j++) {
        int sumCol = 0;
        for (int i = 0; i < rows; i++) {
            sumCol += matrix[i][j];
        }
        cout << "Sum of column " << j << " = " << sumCol << endl;
    }
}

int main() {
    int matrix[MAX][MAX];
    int rows, cols;

    cout << "Enter number of rows (max " << MAX << "): ";
    cin >> rows;
    cout << "Enter number of columns (max " << MAX << "): ";
    cin >> cols;

    cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            cin >> matrix[i][j];

    sumRowCol(matrix, rows, cols);

    return 0;
}
