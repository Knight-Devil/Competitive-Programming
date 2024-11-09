#include <bits/stdc++.h>
using namespace std;
int mod = 1e9;
int main()
{
    int n;
    cin >> n;

    long long base = 1LL;
    int power = n * (n - 1) / 2;
    while (power--)
    {
        base *= 2;
        base %= mod;
    }
    cout << base << endl;
}