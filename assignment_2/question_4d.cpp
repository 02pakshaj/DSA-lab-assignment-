#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> strings = {"banana", "apple", "cherry"};
    int n = strings.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (strings[j] < strings[minIndex]) {
                minIndex = j;
            }
        }
        // Swap strings[i] and strings[minIndex]
        string temp = strings[i];
        strings[i] = strings[minIndex];
        strings[minIndex] = temp;
    }

    cout << "Sorted strings: ";
    for (const auto &str : strings)
        cout << str << " ";
    cout << endl;

    return 0;
}
