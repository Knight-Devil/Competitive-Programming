#include <bits/stdc++.h>
using namespace std;
int main()
{

    string orginal = "codeforces";
    int t;
    cin >> t;
    while (t--)
    {
        string temp;
        cin >> temp;
        int count = 0;
        for (int i = 0; i < 10; i++)
        {
            if (temp[i] != orginal[i])
                count++;
        }
        cout << count << "\n";
    }

    return 0;
}