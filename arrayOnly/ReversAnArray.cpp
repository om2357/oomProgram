#include <iostream>
using namespace std;
void ReverseArray(int arr[], int n)
{
    cout << "your reverse arrray value is : ";
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
void PrintArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    int arr[20];
    int n;

    cout << "enter your array size ";
    cin >> n;

    cout << "enter your array value ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Before reversing the array : ";
    PrintArray(arr, n);
    ReverseArray(arr, n);
    PrintArray(arr, n);

    return 0;
}