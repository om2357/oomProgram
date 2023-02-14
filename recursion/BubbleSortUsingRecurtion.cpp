#include<iostream>
using namespace std;
int BubbleSort(int arr[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    for(int i = 0; i < n ;i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    BubbleSort(arr,n-1);
}
int main()
{
    int arr[20];
    int n;
    cout<<"Enter your array value\n";
    cin>>n;
    cout<<"enter your array element\n";
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }
    BubbleSort(arr,n);
    for(int i = 0 ; i<n ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

   
    return 0;
}