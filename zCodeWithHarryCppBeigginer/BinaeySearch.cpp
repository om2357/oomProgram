#include <iostream>
using namespace std;
int binarySearch(int arr[], int number, int key)
{
    int s = 0;
    int e = number;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e= mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int number;
    cout << "enter a number\n ";
    cin>>number;
    int arr[number];
    for (int i = 0; i < number; i++)
    {
        cout << "enter your array value\n";
        cin >> arr[i];
    }

    int key;
    cout << "enter your key for searching \n";
    cin >> key;
    cout << binarySearch(arr,number, key);

    return 0;
}