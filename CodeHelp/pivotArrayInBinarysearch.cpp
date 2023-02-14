#include <iostream>
using namespace std;
// 8 , 10 , 17 , 1 , 3
// rotet by 1
// 3 , 8 , 10 , 17 , 1
//our pivot element is --> 1 and index is 4
int pivot(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start)/2;
    while (start < end)
    {
        if (arr[mid] >= arr[0])
        {
            start = mid + 1;
        }
        else
        {
            end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main()
{
    int arr[20];
    int n;
    cout << "enter your array size\n";
    cin >> n;
    cout<<"Enter your array element\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int answer = pivot(arr, n);
    cout<<"your pivot element index is "<<answer;

    return 0;
}