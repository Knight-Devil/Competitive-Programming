#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        int arr[n + 1] = {0};
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        // making the forward and backward arrays with precomputation...
        int forward[n + 1], backward[n + 2];
        forward[0] = 0;
        backward[n + 1] = 0;
        for (int i = 1, j = n; i <= n, j > 0; i++, j--)
        {
            forward[i] = __gcd(forward[i - 1], arr[i]);
            backward[j] = __gcd(backward[j + 1], arr[j]);
        }

        while (q--)
        {
            int l, r;
            cin >> l >> r;
            cout << __gcd(forward[l - 1], backward[r + 1]) << "\n";
        }
    }
}