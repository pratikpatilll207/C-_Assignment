//Overload the function for various types.

#include<iostream>
using namespace std;
void sum(int a,int b);
void sum(float a,int b);
void sum(int a,int b)
{
int result =a+b;
cout<<"Result = "<<result;
}
void sum(float a,int b)
{
float result =a+b;
cout<<"Result = "<<result;

}
int main()
{
/*int n,m;
cout<<"Enter the int value of n & m ";
cin>>n>>m;
sum(n,m);
float n1,m1;
cout<<"Enter the float value of n1 & m1 ";
cin>>n1>>m1;
sum(n1,m1);
*/
sum(1,2);
sum(2.3f,5);
return 0;
}

