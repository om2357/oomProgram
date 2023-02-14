#include<iostream>
using namespace std;

void reverse(int arr[],int start,int n)
{
    start = 0;
    int end = n-1;

    while(start<=end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
int otherMethod(int arr[],int start, int n)
{
    start = 0;
    int end = n - 1;
    
    while(start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

void print(int arr[],int n)
{
    for(int i = 0 ; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"enter your array size\n";
    cin>>n;
    int arr[20];

    for (int i = 0; i < n;i++)
    {
        cin>>arr[i];
    }
    cout<<"your reverse array is : ";
    //reverse(arr,0, n);
    otherMethod(arr,0,n);
    //cout<<reverse;
    print(arr,n);
    return 0;
}