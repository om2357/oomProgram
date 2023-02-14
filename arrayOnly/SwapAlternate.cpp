#include <Iostream>
using namespace std;
void swapArray(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        if (i +1 < size)
        {
            swap(arr[i],arr[i+1]);
            
        }
    }
}
void PrintArray(int arr[],int size)
{
    for (int i =0 ;i<size;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

int main()
{
    int arr[20];
    int size;

    cout << "enter your array size : ";
    cin >> size;
    cout << "enter your array value\n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    swapArray(arr, size);
    PrintArray(arr,size);

    return 0;
}