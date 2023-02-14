#include<iostream>
using namespace std;
//sum time this will give a wrong answer so be carefull
int subArray (int arr[],int n)
{
    int maxSum = 0;
    for(int i = 0;i<n;i++)
    {
        int sum = 0 ;
        for(int j=i;j<n;j++)
        {  
           //cout<<"sum value is : "<<sum;
           sum = sum+arr[j];
        }
        if(sum >maxSum)
        {
            maxSum = sum;
        }
    }
    return maxSum;
}
int main()
{
    int n;
    cout<<"enter your array size\n";
    cin>>n;
    int arr[n];
    cout<<"enter your array value\n";
    for(int i = 0 ; i<n ; i++)
    {
        cin>>arr[i];
    }

    cout<<"your sum of maximum sub array is : \n";
    int hello = subArray(arr,n);
    cout<<hello<<endl;
    
    


    return 0;
}