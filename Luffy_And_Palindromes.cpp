#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 10;
int arr[26][N];

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;

        // Reset arr array for each test case
        for (int i = 0; i < 26; i++)
        {
            fill(arr[i], arr[i] + N, 0);
        }

        // Construct the frequency prefix sum for each character
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'a'][i + 1]++;
        }

        // Calculate prefix sums for each character
        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                arr[i][j] += arr[i][j - 1];
            }
        }

        // Process each query
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            int odd_count = 0;

            // Check number of characters with odd frequency in the range [l, r]
            for (int i = 0; i < 26; i++)
            {
                int char_count = arr[i][r] - arr[i][l - 1];
                if (char_count % 2 != 0)
                {
                    odd_count++;
                }
            }

            // A palindrome can have at most one character with odd frequency
            if (odd_count > 1)
                cout << "NO" << "\n";
            else
                cout << "YES" << "\n";
        }
    }

    return 0;
}
