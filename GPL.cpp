#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    uint64_t n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        n = n << 1;
        n = n | (s[i] - '0');
        }
    cout << n;
}