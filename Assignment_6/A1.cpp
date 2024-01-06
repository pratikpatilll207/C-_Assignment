// 1. Given an array of n integers, find the largest element and return if from function.
// int findMax(int nums[], int n);
#include <iostream>
using namespace std;
int findMax(int nums[], int n);
int main()
{
    int n;
    cout << "Enter the size of array :";
    cin >> n;
    int nums[n];
    int max = findMax(nums, n);
    cout << "Max = " << max;
    return 0;
}
int findMax(int nums[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max < nums[i])
        {
            max = nums[i];
        }
    }
    return max;
}
