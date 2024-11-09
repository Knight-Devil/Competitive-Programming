#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{

    if (a.second == b.second)
    {
        return a.first < b.first;
    }

    return a.second > b.second;
}

int main()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v;

    while (n--)
    {
        string name;
        int marks;
        cin >> name >> marks;
        v.push_back({name, marks});
    }

    sort(v.begin(), v.end(), cmp);

    for (auto record : v)
    {
        cout << record.first << " " << record.second << endl;
    }

    return 0;
}
