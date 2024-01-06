#include<iostream>
using namespace std;

int main()
{
    int a,b,r,n;
    cout<<"Enter the two number\t";
    cin>>a>>b;
     while(1){
    cout<<"\nenter operation you want to perform: \n";
    cout<<"1.add\n"<<"2.sub\n"<<"3.mul\n"<<"4.div\n";
    cin>>n;
  
    switch (n)
    {
    case 1:r=a+b;
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
    default:
        break;
    }
    }
}