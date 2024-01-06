#include<iostream>
using namespace std;

int main()
{
    int a,b,r,n;
    do{
    cout<<"\nEnter the two number\t";
    cin>>a>>b;
    cout<<"\nEnter operation you want to perform: \n";
    cout<<"1.add\n"<<"2.sub\n"<<"3.mul\n"<<"4.div\n"<<"5.Exit\n";
    cin>>n;
  
    switch (n)
    {
    case 1: r=a+b;
            cout<<r;
            break;
    case 2: r=a-b;
            cout<<r;
            break;
    case 3: r=a*b;
            cout<<r;
            break;
    case 4: r=a/b;
            cout<<r;
            break;
    case 5: return 0;
    default:
            cout<<"Invalid Choice";
            break;
    }
    }while(n!=0);
    
}