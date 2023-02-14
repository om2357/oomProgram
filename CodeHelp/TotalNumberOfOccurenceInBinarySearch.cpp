#include <iostream>
using namespace std;
int firstOccurense(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            end = mid - 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        mid = start + (end - start);
    }
    return ans;
}

int lastOccurense(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            ans = mid;
            start = mid + 1;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else if (key < arr[mid])
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return ans;
}
int main()
{
    int n;
    int arr[20];
    int key;

    cout << "enter the array size n\n";
    cin >> n;
    cout << "enter the key value \n";
    cin >> key;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int first = firstOccurense(arr, n, key);
    int last = lastOccurense(arr, n, key);

    cout << "your first index is : " << first << endl;
    cout << "your last index is : " << last << endl;

    cout<<"your total number of occurense is : "<<(last - first)+1;
    return 0;
}