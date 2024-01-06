#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
  int i,n,arr[50]={};
  cout<<"Enter the size of array\n";
  cin>>n;

  cout<<"Enter the Array Elements\n";
  for(int i=0;i<n;i++)
  {
      cin>>arr[i];
     
  }
//  for(int i=0;i<n;i++)
//   {
//       cout<<arr[i]<<" ";
//   }
for(int i=n-1;i>=0;i--)
{
    cout<<arr[i]<<" ";
}
    return 0;
}