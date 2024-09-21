#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<int, string> mp;
    mp = {
        {1, "one"},
        {2, "two"},
        {3, "three"},
        {4, "four"},
        {5, "five"},
        {6, "six"},
        {7, "seven"},
        {8, "eight"},
        {9, "nine"},

    };
    int a, b;
    cin >> a >> b;

    for (int i = a; i <= b; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0)
                cout << "even" << "\n";
            else
                cout << "odd" << "\n";
        }
        else
            cout << mp[i] << "\n";
    }

    return 0;
}