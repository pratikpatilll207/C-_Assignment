//Implement following functions:
//1. Reverse the given number and return it.

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
    int n;
    cout<<"Enter no to reverse\n";
    cin>>n;
    int rev= reverse(n);
    cout<<"Reverse is "<<rev;
    return 0;
}
