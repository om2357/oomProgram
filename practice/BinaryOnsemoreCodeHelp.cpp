#include <iostream>
using namespace std;
int binary(int arr[], int key, int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            start = mid + 1;
        }
        else if (arr[mid] < key)
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}
int main()
{
    int arr[20];
    int key, n;
    cout << "enter your arr value \n";
    cin >> n;
    cout << "enter your key value \n";
    cin >> key;
    cout << "enter your array element\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int search = binary(arr, key, n);
    cout << "array index is " << search;
    return 0;
}