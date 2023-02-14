//recurtion is good but code are wrong in the below side
#include<iostream>
using namespace std ;
int recursionArray(int arr[], int n)
{
    int start = 0 ;
    int end = n-1;
    int temp ;
    if (start<end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void print(int arr[],int n)
{
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }

}
int main()
{
    int arr[20];
    int n;
    cout<<"enter your array size \n";
    cin>>n;
    cout<<"enter your array value\n";

    for (int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    print(arr, n);
    cout<<endl;
    recursionArray(arr , n);
    print(arr, n);

    return 0;
}