#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int star = 1, hash = n - 1;
        while (n--)
        {
            for (int i = 1; i <= star; i++)
            {
                cout << "*";
            }
            for (int i = 1; i <= hash; i++)
            {
                cout << "##";
            }
            for (int i = 1; i <= star; i++)
            {
                cout << "*";
            }
            cout << "\n";
            star++;
            hash--;
        }
    }

    return 0;
}
