#include <iostream>
using namespace std;
int main() {
  int n,m,sum=0;
  cout<<"Enter first no\n";
  cin>>n;
  cout<<"Enter second no\n";
  cin>>m;
    while(n<=m){
        sum=sum+n;
        n++;
    }
  cout<<"Sum is "<<sum;
    return 0;
}