//Implement function using reference.

#include<iostream>
using namespace std;
void swap(int &a, int &b);

void swap(int &a, int &b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
}
int main()
{
	int n,m;
	cout<<"Enter the two numbers\n";
	cin>>n>>m;
	cout<<"\nBefore Swapping : "<<" N = "<<n<<" M= "<<m;
	swap(n,m);
	cout<<"\nAfter swapping :  "<<" N = "<<n<<" M= "<<m;
	return 0;
}


