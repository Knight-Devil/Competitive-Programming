#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        multiset<long long> bags;
        for (int i = 0; i < n; i++)
        {
            long long temp;
            cin >> temp;
            bags.insert(temp);
        } // we took all the candies in the bags and put it in a multiset.

        // as we know that multisets store values in sorted order..
        // we can directly choose the begin element as it'll be the largest.
        long long max_candies = 0;
        while (k--)
        {
            auto it = (--bags.end());
            max_candies += (*it);
            bags.erase(it);
            bags.insert((*it) / 2);
        }
        cout << max_candies << endl;
    }
}
