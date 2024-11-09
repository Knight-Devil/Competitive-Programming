#include <bits/stdc++.h>
using namespace std;
int main()
{
    string brackets;
    stack<char> s;
    cin >> brackets;
    for (auto c : brackets)
    {
        if (c == '(')
        {
            s.push(c);
        }
        else if (c == ')' && s.top() == '(')
        {
            s.pop();
        }
        else
        {
            cout << "Invalid Parenthesis";
            return 0;
        }
    }

    if (!s.empty())
        cout << "Invalid Parenthesis";
    else
        cout << "Valid Parenthesis";
}