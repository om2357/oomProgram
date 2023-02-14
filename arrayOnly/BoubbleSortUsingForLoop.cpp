#include <iostream>
using namespace std;
int BubbleSort(int arr[], int n)
{
    for (int i = 1; i < n ; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+i]);
            }
        }
    }
}
int main()
{
    int arr[20];
    int n;
    cout << "Enter your array size\n";
    cin >> n;
    cout << "Enter your array value\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int answer = BubbleSort(arr, n);
    for(int i= 0 ; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}