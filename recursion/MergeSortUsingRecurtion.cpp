#include<iostream>
using namespace std;
//pata nhi ave samajh nhi aa rha h demag kharab baad me fir deakhe h esko.. dhanyabaaad
void mergesort(int *arr, int s, int e)
{
    int mid = (s+e)/2;
    int LeftPartLen = mid - s + 1;//length of left part mid - start + 1
    int RightPartLen = e-mid;//length of right part end - mid

    int *first =  new int [LeftPartLen];
    int *second = new int [RightPartLen];

    int mainArrayIndex = s;
    for(int i = 0 ; i < LeftPartLen ; i++)
    {
        first[i] = arr[mainArrayIndex++];
    }
     mainArrayIndex = mid +1;
    for (int i = 0 ;i <RightPartLen; i++);
    {
        int i = 0;
        second[i] = arr[mainArrayIndex++] ;
    }
    int index =0 ;
    int index2 = 0;

    mainArrayIndex = s;

    while(index< LeftPartLen && index2 < RightPartLen)
    {
        if(first[index]<second[index2])
        {
            arr[mainArrayIndex++] = first[index++];
        }

        else
        {
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index < LeftPartLen)
    {
        arr[mainArrayIndex++] = first[index++];
    }
    while(index2 <RightPartLen)
    {
        arr[mainArrayIndex++] = second[index2++];
    }
}
void merge(int *arr1, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    cout<<"hii";
    int mid = (s+e)/2;
    // for left part sort
    merge(arr1, s, mid);
    // for right part sort
    merge(arr1, mid + 1, e);
    // for merge the array
    merge(arr1, s,e);
}
int main()
{
    int arr1[5] = {2, 9, 5, 7, 8};
    int n = 5;
    merge( arr1 ,0,n-1);
    return 0;
}