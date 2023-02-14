#include<iostream>
using namespace std;
int value(int arr[],int size)
{
    if(size == 0)
    {
        return 0;
    }
    if(size == 1)
    {
        return arr[0];
    }
    
    int remaningPart = value(arr + 1, size - 1);
    int suumm = arr[0]+remaningPart;
    return suumm;
    
}

int main()
{
    int arr[20];
    int n;
    cout<<"enter your array size\n";
    cin>>n;
    cout<<"enter your array value\n";

    for (int i = 0 ;i < n ; i++)
    {
        cin>>arr[i];
    }

    int sum = value(arr,n);
    cout<<"your sum value is : "<<sum;

    return 0;
}