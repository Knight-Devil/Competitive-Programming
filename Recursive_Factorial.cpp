#include <bits/stdc++.h>
using namespace std;

int factorial(int x)
{
    if (x != 1)
        x *= factorial(x - 1);
    return x;
}

int main()
{
    int n;
    cin >> n;

    cout << factorial(n) << "\n";

    return 0;
}
