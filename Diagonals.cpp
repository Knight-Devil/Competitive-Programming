#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int diagonals = 0;

        if (k == 0)
        {
            cout << 0 << "\n";
            continue;
        }

        if (k >= n)
        {
            diagonals++;
            k -= n;
        }

        for (int i = n - 1; i > 0 && k > 0; i--)
        {
            if (k >= 2 * i)
            {
                diagonals += 2;
                k -= 2 * i;
            }
            else if (k >= i)
            {
                diagonals++;
                k -= i;
            }
            else
            {
                continue;
            }
        }

        cout << diagonals << "\n";
    }

    return 0;
}
