#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        int count = 0;
        cin >> n;
        while (n >= 4)
        {
            count++;
            n -= 4;
        }
        while (n >= 2)
        {
            count++;
            n -= 2;
        }

        cout << count << "\n";
    }

    return 0;
}