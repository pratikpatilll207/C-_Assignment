//2. Given a number, check if its prime or not. Return true if its prime else return false;

#include <iostream>
using namespace std;
bool isPrime(int);
bool isPrime(int n){
	int count=0;
	for (int i = 1; i < n; i++)
        {
        
            if (n % i == 0)
            {
                count++;
            }
        }
        
        return count;
}
int main()
{
    int n, count=0;
    cout << "Enter the number:\t ";
    cin >> n ;
    int p = isPrime(n);
    if (p == 1)
        {
            cout <<"The number is prime";
        }
    else{
        	cout<<"The number is not prime";
        }
    return 0;
  
  }
    
