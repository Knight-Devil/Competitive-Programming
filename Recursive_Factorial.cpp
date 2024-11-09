#include <bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n - 1 >= 1)
        return factorial(n - 1) * n;
    else
        return 1;
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n) << endl;
}