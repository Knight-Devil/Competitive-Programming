#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toasts = (k * l) / nl;
    int limes = c * d;
    int salt = p / np;

    cout << min(toasts, min(limes, salt)) / n;

    return 0;
}