//2. Given an array of n integers, find the smallest element and return if from function.
int findMin(int nums[], int n);
#include<iostream>
using namespace std;
int findMin(int nums[], int n);
int main()
{
int n;
cout<<"Enter the size of array :";
cin>>n;
int nums[n];
int min = findMin(nums,n);
cout<<"Min = "<<min;
return 0;
}
int findMin(int nums[], int n)
{ 

for(int i=0;i<n;i++)
{
cin>>nums[i];
}
int i,min=nums[0];
for(int i=0;i<n;i++)
{
if(min>nums[i+1])
{
min=nums[i+1];
}
}
return min;
}
