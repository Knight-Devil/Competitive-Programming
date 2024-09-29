#include <bits/stdc++.h>
using namespace std;

// we are given an array of n elements...
// in each query we'll be given L,R and we have to find the sum of arr[L] to arr[R]...

// for this we'll be using a precomputation technique called PREFIX SUM...
// this array contains the sum of first "i" elements at the ith index..

const int N = 1e3 + 10;
int arr[N][N];

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            int temp;
            cin >> temp;
            arr[i][j] = arr[i][j - 1] + arr[i - 1][j] - arr[i - 1][j - 1] + temp;
        }
    }
    int q;
    cin >> q;
    while (q--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        cout << arr[c][d] - arr[a - 1][d] - arr[c][b - 1] + arr[a - 1][b - 1] << "\n";
    }
}