#include<iostream>
using namespace std;
int SubArray(int arr[],int n)
{
    int sum = 0;
    int maxSum = 0;
    for (int i = 0;i<n;i++)
    {
        sum = sum+arr[i];
        if(sum > maxSum)
        {
            maxSum = sum;
        }
        if(sum<0)
        {
            sum=0;
        }
    }
    return maxSum;
}
int main()
{
    int n;
    cout<<"enter your size of array\n";
    cin>>n;
    int arr[n];
    cout<<"enter your array value\n";
    for(int i = 0;i<n;i++)
    {
        cin>>arr[i];
    }
    int sum = SubArray(arr,n);
    cout<<"your sum is : "<<sum;

    return 0;
}