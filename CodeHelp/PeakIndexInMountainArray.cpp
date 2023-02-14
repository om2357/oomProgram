// this Are follow some relaton
// This is for Left Hand mountain --> arr[i] < arr[i+1]
// This is for right hand mountain --> arr[i] > arr[i+1]
// And peek is greater then both --> arr[i-1] < arr[i] > arr[i+1]
// like this --> 3 4 5 1 2
// only for leetcode  

#include <iostream>
using namespace std;
int mountain(int arr[], int size)
{
    int start = 0;
    int end = start - 1;
    int mid = start + (end - start) / 2;

    while (start < end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end + start) / 2;
    }
    return start;
}
int main()
{
    int n;
    int arr[20];
    cout << "enter your array size \n";
    cin >> n;
    cout << "enter your array element\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int peak = mountain(arr, n);
    cout<<"your peak element is : "<<peak;

    return 0;
}
