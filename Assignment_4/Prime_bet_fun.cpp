//2. Find prime numbers between two positive integers N and M, including N and M.
//For example:
//N = 3
//M = 10
//Prime Numbers = 3 5 7

#include <iostream>
using namespace std;
int Prime(int ,int);
int Prime(int n,int m){
	for (int j = n; j <= m; j++)
    {
    int count=0;
        for (int i = 1; i <= n; i++)
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
int main()
{
    int i, n, m;
    cout << "Enter the Range N & M ";
    cin >> n >> m;
    Prime(n,m);
    return 0;
    
}
