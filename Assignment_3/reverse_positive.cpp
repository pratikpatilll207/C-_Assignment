/*Using above functions, write programs for following:
1. Given a positive integer N, find its reverse.
For example:
N = 534
Reverse = 435
N = 5
Reverse = 5
*/
int reverse(int num);
#include<iostream>
using namespace std;
int reverse(int);
int reverse(int n){
	int rev=0,r;
	while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
        
    }
    return rev;
}
int main()
{
    int n=1,rev;
    cout<<"Enter no to reverse\n";
    cin>>n;
    while(n<0)
    {
    cout<<"Enter Positive Interger";
    cin>>n;
    }
    rev= reverse(n);
    cout<<"Reverse is "<<rev;
    return 0;
}
