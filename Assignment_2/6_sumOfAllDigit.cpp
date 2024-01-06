// 6. Find the sum of all digit of a positive integer.
// For example:
// Number = 3245
// Sum of digits = 14 (3 + 2 + 4 + 5)
#include <iostream>
using namespace std;
int main()
{
    int r = 0, n, sum = 0;
    cout << "Enter the number = ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        sum = sum + r;
        n = n / 10;
    }
    cout << "Sum = " << sum;
    return 0;
}