// 1. Given a positive integer N, find all factors of N.
// For example:
// N = 12
// Factors = 1 2 3 4 6 12
// N = 5
// Factors = 1 5
#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter the number\n";
cin>>n;
cout<<"Factors of given number are = ";
for(i=1;i<=n;i++)
{
    if(n%i==0)
    {
        cout<<i<<"\t";
    }
}

}