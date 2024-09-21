#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        
        reverse(s.begin(), s.end());

        int i = 0;
        while(i < s.size() && s[i] == '0') {
            i++;
        }
        
        if(i == s.size()) {
            cout << "0\n";
        } else {
            cout << s.substr(i) << "\n";
        }
    }
    return 0;
}
