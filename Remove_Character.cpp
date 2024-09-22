#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2, result;
    cin >> s1 >> s2;

    // Step 1: Store characters of s2 in a set
    unordered_set<char> chars_in_s2;
    for (char c : s2) {
        chars_in_s2.insert(c);
    }

    // Step 2: Traverse s1 and keep only characters not in s2
    for (char c : s1) {
        if (chars_in_s2.find(c) == chars_in_s2.end()) {
            result.push_back(c);
        }
    }

    // Step 3: Output the result
    cout << result << "\n";

    return 0;
}
