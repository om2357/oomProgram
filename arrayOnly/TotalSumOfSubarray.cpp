#include<iostream>
using namespace std;
int subArray(int arr[],int &n)
{
    int sum = arr[0];
    
    for (int i = 0 ;i<n;i++)
    {
        int maxSum = arr[i];
       
        for(int j=i+1;j<n;j++)
        {
           sum = max(sum,maxSum);
           maxSum *=arr[j];
          
        }
        sum = max(sum,maxSum);
    }
    return sum;
}
int main()
{
    int n;
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n];
    cout<<"Emter the values of array\n";
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"printing your value of subarray\n";
    int sum = subArray(arr,n);
    cout<<"sum of subArrray is "<<sum<<endl;

    cout<<"Your array is : ";
    for (int i = 0 ;i<n ;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}