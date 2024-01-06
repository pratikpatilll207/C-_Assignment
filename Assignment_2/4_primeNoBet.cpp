// 4. Find prime numbers between two positive integers N and M, including N and M.
// For example:
// N = 3
// M = 10
// Prime Numbers = 3 5 7
#include <iostream>
using namespace std;
int main()
{
    int i, n, m, count;
    cout << "Enter the Range N & M ";
    cin >> n >> m;
    for (int j = n; j <= m; j++)
    {
    count=0;
        for (i = 1; i <= n; i++)
        {
        
            if (n % i == 0)
            {
                count++;
            }
        }
        n++;
        if (count == 2)
        {
            cout << n-1 << " \t";
        }
    }
}
