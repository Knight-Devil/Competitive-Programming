#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, long long> mp;  // map to store singer ID and their song count

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        mp[temp]++;  // Increment the count for the singer
    }

    // Now we need to find the maximum count of songs by any singer
    long long max_songs = 0;

    for (auto it : mp)
    {
        if (it.second > max_songs)
        {
            max_songs = it.second;  // Find the maximum number of songs by any singer
        }
    }

    // Count how many singers have the maximum number of songs
    long long favourite_count = 0;
    for (auto it : mp)
    {
        if (it.second == max_songs)
        {
            favourite_count++;
        }
    }

    // Output the number of favourite singers
    cout << favourite_count << "\n";

    return 0;
}
