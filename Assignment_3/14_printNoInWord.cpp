// 14. Given a positive integer N, print the number in words.
// For example:
// N = 5312
// Result = Five Thousand Three Hundred Twelve
#include <iostream>
using namespace std;
void Number(int);
int Num(int, int);
int main()
{
    int n, r, rev = 0, rem, count = 0, temp = 0;
    cout << "Enter the number \n";
    cin >> n;
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
        count++;
    }
    if (count == 5)
    {
        while (temp >= 10000 && temp < 100000)
        {
            rem = rev % 10;
            // switch (rem)
            // {
            // case 0:
            //     break;
            // case 1:
            //     cout << "ONE ";
            //     break;
            // case 2:
            //     cout << "TWO ";
            //     break;
            // case 3:
            //     cout << "THREE ";
            //     break;
            // case 4:
            //     cout << "FOUR ";
            //     break;
            // case 5:
            //     cout << "FIVE ";
            //     break;
            // case 6:
            //     cout << "SIX ";
            //     break;
            // case 7:
            //     cout << "SEVEN ";
            //     break;
            // case 8:
            //     cout << "EIGHTH ";
            //     break;
            // case 9:
            //     cout << "NINE ";
            //     break;
            // }
            Num(rem, rev);
            rev = rev / 10;
            temp = temp / 10;
        }
        cout << "THOUSAND ";
        count = 4;
    }
    if (count == 4)
    {
        while (temp >= 1000 && temp < 10000)
        {
            rem = rev % 10;
            // switch (rem)
            // {
            // case 0:
            //     break;
            // case 1:
            //     cout << "ONE ";
            //     break;
            // case 2:
            //     cout << "TWO ";
            //     break;
            // case 3:
            //     cout << "THREE ";
            //     break;
            // case 4:
            //     cout << "FOUR ";
            //     break;
            // case 5:
            //     cout << "FIVE ";
            //     break;
            // case 6:
            //     cout << "SIX ";
            //     break;
            // case 7:
            //     cout << "SEVEN ";
            //     break;
            // case 8:
            //     cout << "EIGHTH ";
            //     break;
            // case 9:
            //     cout << "NINE ";
            //     break;
            // }
            Number(rem);
            rev = rev / 10;
            temp = temp / 10;
        }
        cout << "THOUSAND ";
        count = 3;
    }
    if (count == 3)
    {
        while (temp > 100 && temp < 1000)
        {
            rem = rev % 10;
            // switch (rem)
            // {
            // case 0:
            //     break;
            // case 1:
            //     cout << "ONE ";
            //     break;
            // case 2:
            //     cout << "TWO ";
            //     break;
            // case 3:
            //     cout << "THREE ";
            //     break;
            // case 4:
            //     cout << "FOUR ";
            //     break;
            // case 5:
            //     cout << "FIVE ";
            //     break;
            // case 6:
            //     cout << "SIX ";
            //     break;
            // case 7:
            //     cout << "SEVEN ";
            //     break;
            // case 8:
            //     cout << "EIGHTH ";
            //     break;
            // case 9:
            //     cout << "NINE ";
            //     break;
            // }
            Number(rem);
            rev = rev / 10;
            temp = temp / 10;
        }
        if(rem!=0)
        {
        cout << "HUNDREAD ";
        }
        count = 2;
    }
    if (count == 2)
    {
        while (temp > 10 && temp < 100)
        {

            rem = rev % 10;
            rev = rev / 10;
            // switch (rem)
            // {
            // case 1:
            //     switch (rev + 10)
            //     {
            //     case 10:
            //         cout << "TEN ";
            //         break;
            //     case 11:
            //         cout << "ELEONE ";
            //         break;
            //     case 12:
            //         cout << "TWELVE ";
            //         break;
            //     case 13:
            //         cout << "THERTEEN ";
            //         break;
            //     case 14:
            //         cout << "FOURTEEN ";
            //         break;
            //     case 15:
            //         cout << "FIVETEEN ";
            //         break;
            //     case 16:
            //         cout << "SIXTEEN ";
            //         break;
            //     case 17:
            //         cout << "SEVENTEEN ";
            //         break;
            //     case 18:
            //         cout << "EIGHTHTEEN ";
            //         break;
            //     case 19:
            //         cout << "NINETEEN ";
            //         break;
            //     }
            //     return 0;

            // case 2:
            //     cout << "TWENTY  ";
            //     break;
            // case 3:
            //     cout << "THERTY ";
            //     break;
            // case 4:
            //     cout << "FOURTY ";
            //     break;
            // case 5:
            //     cout << "FIVETY ";
            //     break;
            // case 6:
            //     cout << "SIXTY ";
            //     break;
            // case 7:
            //     cout << "SEVENTY ";
            //     break;
            // case 8:
            //     cout << "EIGHTHTY ";
            //     break;
            // case 9:
            //     cout << "NINETY ";
            //     break;
            // }
            // switch (rev)
            // {
            // case 0:
            //     cout << "ZERO ";
            //     break;
            // case 1:
            //     cout << "ONE ";
            //     break;
            // case 2:
            //     cout << "TWO ";
            //     break;
            // case 3:
            //     cout << "THREE ";
            //     break;
            // case 4:
            //     cout << "FOUR ";
            //     break;
            // case 5:
            //     cout << "FIVE ";
            //     break;
            // case 6:
            //     cout << "SIX ";
            //     break;
            // case 7:
            //     cout << "SEVEN ";
            //     break;
            // case 8:
            //     cout << "EIGHTH ";
            //     break;
            // case 9:
            //     cout << "NINE ";
            //     break;
            // }
            Num(rem, rev);
            temp = temp / 10;
        }
    }
}
void Number(int a)
{
    switch (a)
    {
    case 0:
        break;
    case 1:
        cout << "ONE ";
        break;
    case 2:
        cout << "TWO ";
        break;
    case 3:
        cout << "THREE ";
        break;
    case 4:
        cout << "FOUR ";
        break;
    case 5:
        cout << "FIVE ";
        break;
    case 6:
        cout << "SIX ";
        break;
    case 7:
        cout << "SEVEN ";
        break;
    case 8:
        cout << "EIGHTH ";
        break;
    case 9:
        cout << "NINE ";
        break;
    }
}
int Num(int a, int b)
{
    switch (a)
    {
    case 1:
        switch (b + 10)
        {
        case 10:
            cout << "TEN ";
            break;
        case 11:
            cout << "ELEONE ";
            break;
        case 12:
            cout << "TWELVE ";
            break;
        case 13:
            cout << "THERTEEN ";
            break;
        case 14:
            cout << "FOURTEEN ";
            break;
        case 15:
            cout << "FIVETEEN ";
            break;
        case 16:
            cout << "SIXTEEN ";
            break;
        case 17:
            cout << "SEVENTEEN ";
            break;
        case 18:
            cout << "EIGHTHTEEN ";
            break;
        case 19:
            cout << "NINETEEN ";
            break;
        }
        return 0;

    case 2:
        cout << "TWENTY  ";
        break;
    case 3:
        cout << "THERTY ";
        break;
    case 4:
        cout << "FOURTY ";
        break;
    case 5:
        cout << "FIVETY ";
        break;
    case 6:
        cout << "SIXTY ";
        break;
    case 7:
        cout << "SEVENTY ";
        break;
    case 8:
        cout << "EIGHTHTY ";
        break;
    case 9:
        cout << "NINETY ";
        break;
    }
     switch (b)
    {
    case 0:
        break;
    case 1:
        cout << "ONE ";
        break;
    case 2:
        cout << "TWO ";
        break;
        cout << "THREE ";
        break;
    case 4:
        cout << "FOUR ";
        break;
    case 5:
        cout << "FIVE ";
        break;
    case 6:
        cout << "SIX ";
        break;
    case 7:
        cout << "SEVEN ";
        break;
    case 8:
        cout << "EIGHTH ";
        break;
    case 9:
        cout << "NINE ";
        break;
    }
}
