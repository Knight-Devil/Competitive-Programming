#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, mihai = 0, bianca = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            if (temp % 2 == 0)
                mihai += temp;
            else
                bianca += temp;
        }
        if (mihai > bianca)
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }

    return 0;
}
