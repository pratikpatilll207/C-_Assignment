// 12. Find the count of a digit in a given positive integer.
// For example:
// Number = 12123
// Digit = 1
// Count of digit 1 in 12123 = 2 (as 1 appears twice in the number)
#include <iostream>
using namespace std;
int main()
{
    int n1, r, d, count = 0;
    cout << "Enter the no\n";
    cin >> n1;
    cout << "Enter the digit\n";
    cin >> d;
    while (n1 != 0)
    {
        r = n1 % 10;
        if (d == r)
        {
            count++;
        }
        n1 = n1 / 10;
    }
    cout << "Count of digit " << d << " is = " << count;
    return 0;
}