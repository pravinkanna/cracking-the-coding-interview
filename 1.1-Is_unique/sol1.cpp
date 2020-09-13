//Time Complexity - O(n^2)
//Space Complexity - O(1)
#include <iostream>
using namespace std;

int main() {
    string s;
    bool flag = true;
    cin >> s;
    int len = s.size();

    for (int i = 0; i < len - 1; i++) {
        for (int j = i + 1; j < len; j++) {
            if (s[i] == s[j]) {
                flag = false;
                break;
            }
        }
    }
    cout << (flag ? "All Unique" : "Not All Unique");

    cout << "\n";
    return 0;
}