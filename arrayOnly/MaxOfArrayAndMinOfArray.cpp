#include <iostream>
#include <climits>
using namespace std;
int GetMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int GetMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}
int main()
{
    int num;
    int arr[20];
    int size;
    cout << "enter your array size :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter Your array values :";
        cin >> arr[i];
    }

    // for (int i = 0; i < 10; i++)
    // {
    //     cout << "your array value is :" << arr[i] << endl;
    // }

    cout<<"your maximum array value is : "<<GetMax(arr,size)<<endl;
    cout<<"your Minumum array value is : "<<GetMin(arr,size)<<endl;

    return 0;
}