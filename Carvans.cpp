// the problem below is to understand the importance of understanding overflow...

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int n, count = 1;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            if (arr[i] < arr[i - 1])
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}