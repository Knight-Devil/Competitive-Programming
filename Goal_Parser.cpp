#include <bits/stdc++.h>
using namespace std;
int main()
{
    string command;
    cin >> command;
    for (int i = 0; i < command.size(); i++)
    {
        if (command[i] == 'G')
            cout << 'G';
        else if (command[i] == '(' && command[i + 1] == ')')
        {
            cout << 'o';
            i++;
        }
        else if (command[i] == '(' && command[i + 1] == 'a')
        {
            cout << "al";
            i += 3;
        }
    }

    return 0;
}