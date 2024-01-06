//3. Given an array of n integers, find the second largest element and return if from function.
/*int findSecondLargest(int nums[], int n);
#include<iostream>
using namespace std;
int findSecondLargest(int nums[], int n);
int main()
{
int n;
cout<<"Enter the size of array :";
cin>>n;
int nums[n];
int smax=findSecondLargest(nums,n);
cout<<"Second Largest Element = "<<smax;
return 0;
}
int findSecondLargest(int nums[], int n)
{
int temp,i=0;
for(int k=0;k<n;k++)
{
cin>>nums[k];
}
for(i=0;i<n;i++)
{
for(int j=i+1;j<n;j++)
{
if(nums[i]<nums[j])
{
temp=nums[j];
nums[j]=nums[i];
nums[i]=temp;
}
}
}
return nums[1];
}*/
#include<iostream>
using namespace std;
int main(){
	int arr[100],n,max,smax,i;
	cout<<"How many integers"<<endl;
	cin>>n;
	cout<<"Enter elements"<<endl;
	for(i=0; i<n; i++)
		cin>>arr[i];
	max=smax=arr[0];
	for(i=1; i<n; i++) {
		if(arr[i]>max) {
			smax=max;
			max=arr[i];		
		}
		else if(arr[i]>smax){
			smax=arr[i];
		}
	}
	if(max==arr[0]) {
		smax=arr[1];
		for(i=2; i<n; i++) {
			if(arr[i]>smax)
				smax=arr[i];
		}
	}
	cout<<"max="<<max<<" smax="<<smax<<endl;
	return 0;
}
