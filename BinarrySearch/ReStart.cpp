#include<iostream>
using namespace std;
int search(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end)/ 2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        if(key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            start = mid - 1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main()
{
    int arr[6] = {2,12,13,23,31,43};
    cout<<"enter your key :- "<<endl;
    int key;
    cin>>key;
    cout<<"your key index is --> "<<search(arr,6,key)<<endl;
    

    return 0;
}