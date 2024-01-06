// 11. Given a positive integer N, check if it is an armstrong number or not.
// An armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits.
// For example:
// N = 153
// Number of digits in number = 3
// Sum of its own digits each raised to the power of the number of digits = (1 x 1 x 1) + (5 x 5 x 5) + (3 x 3 x 3) = 1 + 125 + 27 = 153
// 153 is armstrong number.

// N = 15
// Number of digits in number = 2
// Sum of its own digits each raised to the power of the number of digits = (1 x 1) + (5 x 5) = 1 + 25 = 26
// 15 is not an armstrong number.
#include <iostream>
using namespace std;
int main()
{
    int r = 0, n, sum = 0, c = 1, temp = 0;
    cout << "Enter the number = ";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        c = r * r * r;
        sum = sum + c;
        n = n / 10;
    }
    n = temp;
    if (n == sum)
    {
        cout << "\nThe given number is armstrong number";
    }
    else
    {
        cout << "The given number is not armstrong number ";
    }

    return 0;
}