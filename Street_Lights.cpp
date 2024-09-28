#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }

    int days;
    cin >> days;

    for (int i = 0; i < days; i++)
    {
        for (int j = 1; j < n - 1; j++)
        {
            if ((v[j - 1] == 0 && v[j + 1] == 0) || (v[j - 1] == 1 && v[j + 1] == 1))
            {
                v[j] = 0;
            }
        }
    }

    v[0] = 0;
    v[n - 1] = 0;

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}