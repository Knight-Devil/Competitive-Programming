#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> home;
    vector<int> guest;

    while (n--)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        home.push_back(temp1);
        guest.push_back(temp2);
    }
    int match = 0;

    for (int i = 0; i < home.size(); i++)
    {
        for (int j = 0; j < home.size(); j++)
        {
            if (home[i] == guest[j])
                match++;
        }
    }
    cout << match << endl;
}
