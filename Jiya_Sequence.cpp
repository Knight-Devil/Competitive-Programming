#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int result = 1;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            result = (result * temp) % 10;
        }

        if (result == 2 || result == 3 || result == 5)
        {
            cout << "YES" << "\n";
        }
        else
            cout << "NO" << "\n";
    }
}