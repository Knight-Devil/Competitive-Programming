#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string password;
        cin >> password;

        bool isStrong = true;

        for (int i = 0; i < n - 1; i++) {
            // Check if characters are in non-decreasing ASCII order
            if (password[i] > password[i + 1]) {
                isStrong = false;
                break;
            }
        }

        if (isStrong) {
            cout << "YES" << "\n";
        } else {
            cout << "NO" << "\n";
        }
    }

    return 0;
}
