#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    long long int result = 0;
    for (int i = 0; i < n; i++)
    {
        long long int temp;
        cin >> temp;
        result += temp;
    }
    cout << result << "\n";

    return 0;
}