// 13. Given a positive integer N, print the digits in the number as words.
// For example:
// N = 231
// Result = Two Three One
#include<iostream>
using namespace std;
int main()
{
int n,r,no=1,i,rem;
cout<<"Enter the number \n";
cin>>n;
while(n>0)
{
r=n%10;
no=no*10+r;
n=n/10;
}
while(no>1)
{
rem=no%10;
switch(rem)
{
case 0:cout<<"ZERO\n";break;
case 1:cout<<"ONE\n";break;
case 2:cout<<"TWO\n";break;
case 3:cout<<"THREE\n";break;
case 4:cout<<"FOUR\n";break;
case 5:cout<<"FIVE\n";break;
case 6:cout<<"SIX\n";break;
case 7:cout<<"SEVEN\n";break;
case 8:cout<<"EIGHTH\n";break;
case 9:cout<<"NINE\n";break;
}
no=no/10;
}
 return 0;
}
