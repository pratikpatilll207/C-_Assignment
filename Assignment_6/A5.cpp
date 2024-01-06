//5. Given an array of n integers, find the given element. Return true if element is present in the arrayelse return false.
//bool search(int nums[], int n, int element);


#include<iostream>
using namespace std;
bool findelement(int arr[],int n,int var)
{
 
    for(int i=0;i<n;i++)
    {
    if(var==arr[i]) return true;
    }
    return false;
}

int main()
{
    int arr[100],n,var;
    bool result=true;

    do{
            cout<<"enter size of array :-(<=100) ";
            cin>>n;
    }while(n<=0||n>100);

    for(int i=0;i<n;i++)
    {
        cout<<"enter "<<i+1<<" value :- ";
        cin>>arr[i];
    }
    cout<<"\nenter finding variable value :- ";
    cin>>var;
    result=findelement(arr,n,var);

    if(result)
    cout<<"\n variable is present";
    else
    cout<<"\n variable is not present";


    return 0;
}




