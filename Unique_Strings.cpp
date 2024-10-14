#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        // m[s] = m[s] + 1
        m[s]++;
    }
    // printing the list of unique strings along with their frequency...
    for (auto n : m)
    {
        cout << n.first << " " << n.second << endl;
    }
}