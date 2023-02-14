#include<iostream>
using namespace std;
int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size-1;
    int mid = start + (end - start)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key>arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start)/2;        
    }
    return -1;
}
int main()
{
    
    cout<<"Enter the size of array -: "<<endl;
    int size;
    cin>>size;
    int arr[10];
    for(int i = 0; i<size; i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the value of Array :-";
    int key;
    cout<<"Enter your Key :- "<<endl;
    cin>>key;
    cout<<"your index number is --> "<<search(arr,size,key)<<endl;
    return 0;
}