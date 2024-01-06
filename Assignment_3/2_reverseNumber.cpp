// 2. Given a positive integer N, find its reverse.
// For example:
// N = 534
// Reverse = 435
// N = 5
// Reverse = 5
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,rev=0,r;
    cout<<"Enter no to reverse\n";
    cin>>n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    cout<<"Reverse is "<<rev;
    return 0;
}