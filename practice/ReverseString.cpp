#include<iostream>
using namespace std ;
int arrayReverse(int arr[],int n)
{
    int start = 0 ;
    int end = n-1;
    while(start <= end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void print (int arr[], int n)
{
    for (int i = 0 ; i < n ;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[20];
    int n;
    cout <<"enter the array of size \n";
    cin>>n;
    for(int i = 0 ; i < n ; i++)
    {
        cin>>arr[i];
    }
    int reverse = arrayReverse(arr, n);

    
    cout<<"Your Reverse number is : ";
    print(arr,n);
    return 0;
}