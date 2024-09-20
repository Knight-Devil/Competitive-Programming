// The precedence of datatypes is as below:
// char -> Int -> long int -> long long int -> float -> double

// Below are the overflow ranges for different datatypes:
// -10^9 < int < 10^9
// -10^12 < long int < 10^12
// -10^18 < long long int < 10^18

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a = 10000;
    int b = 10000;
    int c = a * b;
    // the code above will return the overflown number and won't return 10000000000.

    long long int a = 10000;
    long long int b = 10000;
    long long int c = a * b;
    // this code will print 10000000000 as it is in the limit of long long int.

    // if both a and b are integers and you want to store a*b into long long int then.
    int a = 10000;
    int b = 10000;
    long long int c = a * b * 1LL; // here we are multiplying a*b with a long long number to typecast the answer into LL.

    double a = 10000;
    double b = 10000;
    double c = a * b;
    cout << fixed << setprecision(0) << c << "\n";


    // e is a scientific way to write "10 to power something" and it works in programming too...
    double example = 1e24; // i.e 10^24
    // the datatype double will be able tos store this number but not accurately...
 
    // so for CP try to avoid using "double" and "float" datatypes... as they lead to precision errors... 

    return 0;
}