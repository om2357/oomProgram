#include <iostream>
using namespace std;
bool sorted(int arr[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool remaning = sorted(arr + 1, size - 1);
        return remaning;
    }
    
}
int main()
{
    int arr[20];
    int n;
    cout << "Enter your array size\n";
    cin >> n;
    cout << "enter your array value \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sort = sorted(arr, n);
    if (sort)
    {
        cout<<"your Array is sorted \n";
    }
    else
    {
        cout<<"your array is Unsorted";
    }

    return 0;
}