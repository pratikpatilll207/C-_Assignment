// 8. Find the product of all digit of a positive integer.
// For example:
// Number = 312
// Sum of digits = 6 (3 x 1 x 2)
#include <iostream>
using namespace std;
int main()
{
    int r = 0, n, p = 1;
    cout << "Enter the number = ";
    cin >> n;
    while (n > 0)
    {
        r = n % 10;
        p = p * r;
        n = n / 10;
    }
    cout << "Product = " << p;
    return 0;
}