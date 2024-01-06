#include<iostream>
using namespace std;
int main()
{
    int p,n,result=1;
    cout<<"Enter the number = ";
    cin>>n;
    cout<<"Enter the power of number = ";
    cin>>p;
    for(int i=1;i<=p;i++)
    {
        result=result*n;
    }
    cout<<"Result =  "<<result;
    return 0;
}