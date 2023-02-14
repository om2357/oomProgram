#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n;
    cout << " enter the array size ";
    cin >> n;
    cout << "Enter the array value "<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int start = 0;
    int end = n - 1;
    int temp;
    while (start != end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    cout<< "your reverse Array is -> ";
     for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    

   
    return 0;
}
