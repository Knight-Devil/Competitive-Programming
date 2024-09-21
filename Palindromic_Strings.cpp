#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int i = 0, j = s.length() - 1;

    while (j > i)
    {
        if (s[i] != s[j])
        {
            cout << "NO";
            return 0;
        }
        i++;
        j--;
    }
    cout << "YES" << "\n";

    return 0;
}
