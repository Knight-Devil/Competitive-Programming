#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<long long> arr(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            int temp;
            cin >> temp;
            arr[i] = temp + arr[i - 1];
        }

        while (q--)
        {
            int l, r;
            long long k;
            cin >> l >> r >> k;

            long long result = arr[l - 1] + ((r - l + 1) * k) + (arr[n] - arr[r]);

            if (result % 2 == 1)
                cout << "YES" << "\n";
            else
                cout << "NO" << "\n";
        }
    }

    return 0;
}
