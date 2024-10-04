#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        string s;
        cin >> s;
        int flag = 1;
        while (flag)
        {
            int map_pos = s.find("map");
            if (map_pos == -1)
            {
                flag = 0;
            }
            else
            {
                s = s.substr(0, map_pos + 1) + s.substr(map_pos + 2);
                count++;
            }
        }
        flag = 1;
        while (flag)
        {
            int pie_pos = s.find("pie");
            if (pie_pos == -1)
            {
                flag = 0;
            }
            else
            {
                s = s.substr(0, pie_pos + 1) + s.substr(pie_pos + 2);
                count++;
            }
        }

        cout << count << "\n";
    }

    return 0;
}