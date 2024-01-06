//4. Given an array of n integers, find the second smallest element and return if from function.
//int findSecondSmallest(int nums[], int n);

#include<iostream>
using namespace std;
int find2ndsmall(int arr[],int n)
{
    int min=arr[0];int second_min=arr[1];
    for(int i=1;i<n;i++)
    {
        if(min>arr[i])
        {
            second_min=min;
                    min=arr[i];

        }
    }
    return second_min;
}

int main()
{
   int arr[100],n,second_min;
   do
   {
   cout<<"enter size of array :-(1<size<=100) ";
   cin>>n;
    /* code */
   } while (n<=1||n>100);
cout<<"\nenter values :-";
   for(int i=0;i<n;i++)
   {
      cin>>arr[i];
   }

second_min=find2ndsmall(arr,n);

cout<<"\nsecond max is :- "<<second_min;

    return 0;
}
