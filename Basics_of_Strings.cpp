#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str1 = "Hello", str2 = "World", str3;

    // cpp provides direct string comparison operations
    if (str1 == str2)
    {
        cout << "Equal" << "\n";
    }
    else
        cout << "Not equal" << "\n";

    // accessing a particular character in strings can be done by indexing...
    // characters are denoted by '' and strings by ""

    cout << "Size of the string is : " << str1.size() << "\n";

    // to take inputs with spaces use getline()...
    getline(cin, str3);
    cout << str3 << "\n";

    // use cin.ignore() to move the cursor to the next line...

    return 0;
}