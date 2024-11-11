#include <bits/stdc++.h>
using namespace std;
int main()
{
    int police = 0;
    int untreated = 0;

    int n;
    cin >> n;
    vector<int> occurings;
    while (n--)
    {
        int temp;
        cin >> temp;
        occurings.push_back(temp);
    }

    for (int i = 0; i < occurings.size(); i++)
    {
        if (occurings[i] == -1 && police > 0)
        {
            police--;
        }
        else if (occurings[i] == -1 && police <= 0)
        {
            untreated++;
        }
        else
        {
            police += occurings[i];
        }
    }
    cout << untreated << endl;
}
