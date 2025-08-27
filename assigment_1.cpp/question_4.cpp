#include <iostream>
using namespace std;

// a) Reverse elements of an array
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

// b) Matrix multiplication
bool multiplyMatrices(int A[][10], int B[][10], int result[][10], int r1, int c1, int r2, int c2) {
    if (c1 != r2) {
        cout << "Matrix multiplication not possible due to incompatible dimensions.\n";
        return false;
    }
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++)
                result[i][j] += A[i][k] * B[k][j];
        }
    }
    return true;
}

// c) Transpose of a matrix
void transposeMatrix(int matrix[][10], int transpose[][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            transpose[j][i] = matrix[i][j];
}

// Helper function to print 1D array
void printArray(int arr[], int n) {
    for (int i=0; i<n; i++) cout << arr[i] << " ";
    cout << "\n";
}

// Helper function to print matrix
void printMatrix(int matrix[][10], int rows, int cols) {
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++)
            cout << matrix[i][j] << " ";
        cout << "\n";
    }
}

int main() {
    // Part a) Reverse Array
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Original array:\n";
    printArray(arr, n);

    reverseArray(arr, n);
    cout << "Reversed array:\n";
    printArray(arr, n);

    // Part b) Matrix Multiplication
    int A[10][10] = {{1, 2, 3},
                     {4, 5, 6}};
    int B[10][10] = {{7, 8},
                     {9, 10},
                     {11, 12}};
    int result[10][10];
    int r1 = 2, c1 = 3, r2 = 3, c2 = 2;

    cout << "\nMatrix A:\n";
    printMatrix(A, r1, c1);
    cout << "Matrix B:\n";
    printMatrix(B, r2, c2);

    if (multiplyMatrices(A, B, result, r1, c1, r2, c2)) {
        cout << "Result of multiplication (A x B):\n";
        printMatrix(result, r1, c2);
    }

    // Part c) Transpose of matrix
    int matrix[10][10] = {{1, 2, 3},
                          {4, 5, 6}};
    int transpose[10][10];
    int rows = 2, cols = 3;

    cout << "\nOriginal matrix:\n";
    printMatrix(matrix, rows, cols);

    transposeMatrix(matrix, transpose, rows, cols);

    cout << "Transpose of matrix:\n";
    printMatrix(transpose, cols, rows);

    return 0;
}

