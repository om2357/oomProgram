#include <iostream>
using namespace std;
int SelectionSort(int arr[], int start, int last)
{
    if (start >= last - 1)
    {
        return 0;
    }
    int minIndex = start;
    for (int i = start; i < last; i++)
    {
        if (arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }
    int temp = arr[minIndex];
    arr[minIndex] = arr[start];
    arr[start] = temp;

    SelectionSort(arr, start + 1, last);
}
int main()
{
    int arr[20];
    int n;
    cout << "Enter your array Size\n";
    cin >> n;
    cout << "Enter your array value For Selectoin Sort\n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int Answer = SelectionSort(arr, 0, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}