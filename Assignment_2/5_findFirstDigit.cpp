// 5. Find the first digit in a positive integer.
// For example:
// Number = 32
// First Digit = 3
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
        n = n / 10;
    }
    cout << "First Digit of Given Number is  = " << r;
    return 0;
}