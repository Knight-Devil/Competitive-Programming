#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int arr[N]; // remember that all the global arrays are initialised to 0...
// here we used precomputation for the count on the array...

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr[temp]++;
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        cout << arr[x] << "\n";
    }
}