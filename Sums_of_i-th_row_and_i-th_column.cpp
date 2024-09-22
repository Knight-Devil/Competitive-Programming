#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int mini = min(n, m);
    int arr[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }

    int row_sum[n] = {0}, col_sum[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            col_sum[j] += arr[i][j];
            row_sum[i] += arr[i][j];
        }
    }

    for (int i = 0; i < mini; i++)
    {
        if (row_sum[i] == col_sum[i])
            continue;
        else
        {
            cout << "0" << "\n";
            return 0;
        }
    }
    cout << "1" << "\n";

    

    return 0;
}