// 3. Find sum of all numbers between two positive integers N and M, including N and M.
// For example:
// N = 3
// M = 7
// Sum = 25 (3 + 4 + 5 + 6 + 7)
#include <iostream>
using namespace std;
int main()
{
    int n, m, sum = 0;
    cout << "Enter first no\n";
    cin >> n;
    cout << "Enter second no\n";
    cin >> m;
    while (n <= m)
    {
        sum = sum + n;
        n++;
    }
    cout << "Sum is " << sum;
    return 0;
}