//Implement swap function to swap two values.

#include<iostream>
using namespace std;
int swap(int ,int );

int swap(int a, int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	cout<<"\nAfter swapping :  "<<" N = "<<a<<" M= "<<b;
	return 0;
}
int main()
{
	int n,m;
	cout<<"Enter the two numbers\n";
	cin>>n>>m;
	cout<<"\nBefore Swapping : "<<" N = "<<n<<" M= "<<m;
	swap(n,m);
	return 0;
}


