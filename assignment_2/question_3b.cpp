#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int low, int high) {
    if (low > high)
        return low + 1;

    int mid = (low + high) / 2;

    if (arr[mid] == mid + 1)
        return findMissingBinary(arr, mid + 1, high);
    else
        return findMissingBinary(arr, low, mid - 1);
}

int main() {
    int arr[] = {1, 2, 3, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Missing number (binary): " << findMissingBinary(arr, 0, n - 1) << endl;
    return 0;
}
