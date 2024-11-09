#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack<int> s;
    stack<int> v;
    int n;
    cin >> n;
    while (n--)
    {
        int temp;
        cin >> temp;
        s.push(temp);
    }
    int max = INT32_MIN;

    while (!s.empty())
    {
        if (s.top() > max)
        {
            max = s.top();
            v.push(-1);
            s.pop();
        }
        else
        {
            v.push(max);
            s.pop();
        }
    }

    while (!v.empty())
    {
        cout << v.top() << " ";
        v.pop();
    }
}