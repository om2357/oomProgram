#include <iostream>
using namespace std;
void alternatSwap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2) // i=i+2
    {
        if (i + 1 < size)
        {
            swap(arr[i],arr[i + 1]);
        }
    }
}
void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i]<< " ";
    }
    cout << endl;
}
int main()
{
    int arr[20];
    int size;

    cout << "Eter your array size : ";
    cin >> size;
    cout << "Enter array value is : ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    alternatSwap(arr, size);
    printArray(arr, size);
    return 0;
}