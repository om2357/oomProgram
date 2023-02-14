#include <iostream>
using namespace std;
int position(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1; 

    while (start <= end)
    {
        if (arr[mid] == key)
        {   
            ans = mid;
            end = mid - 1; 
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; 
    }
    return ans;
}

int lastPosition(int arr[], int size, int key)
{
    int start = 0;
    int end = size - 1;
    int mid = start + (end - start) / 2;
    int ans = -1; 

    while (start <= end)
    {
        if (arr[mid] == key)
        {   
            ans = mid;
            start = mid + 1; 
        }

        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2; 
    }
    return ans;
}


int main()
{
    int arr[20];
    int n, key;

    cout << "enter the key";
    cin >> key;
    cout << "Entar the array size : ";
    cin >> n;
    cout << "enter in sorted form " << endl;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    int pos = position(arr, n, key);
    int right = lastPosition(arr, n, key);
    cout << "your first occurence is "<<pos<<endl;
    cout << "lest occernace of key is " << right;
    return 0;
}