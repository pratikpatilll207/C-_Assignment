// 9. Given a positive integer N, check if its palindrome or not. A palindrome number is a number that is same as its reverse.
// For example:
// Number = 32
// Not a palindrome. (Reverse is 23 and not same as 32)
// Number = 545
// A palindrome. (Reverse is 545 and not same as 545)
#include <iostream>
using namespace std;
int main()
{
    int n, rev = 0, r, temp;
    cout << "Enter The Number\n";
    cin >> n;
    temp = n;
    while (n != 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    if (temp == rev)
    {
        cout << "The number is palindrome";
    }
    else
    {
        cout << "The number is not palindrome";
    }
    return 0;
}