#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s = "OpenAI";
    reverse(s.begin(), s.end());
    cout << "Reversed string: " << s << endl;
    return 0;
}
