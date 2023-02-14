// binery search is use when your arrays element shoud be in montonic function
// it mean bineary search is only use in increasing or decreasing order
// for --> left ---> end = mid - 1 ;
// for --> right ---> start = mid + 1 ;
#include <iostream>
using namespace std;
int BinarySearch(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + end) / 2; // we can use -->  start + (end - star)/2;

    while (start <= end)
    {
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int main()
{
    int arr[20];
    int n, key;
    cout << "enter the array size : ";
    cin >> n;
    cout << "enter Your key value :";
    cin >> key;
    cout << "enter your array value :" << endl
        << "enter a montonic values";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    } 
    int index = BinarySearch(arr, n, key);
    cout << "your index is : " << index << endl;

    return 0;
}