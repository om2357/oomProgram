#include <iostream>
using namespace std;
bool Binary(int arr[], int s, int e, int key)
{
    if (s > e)
    {
        return 0;
    }
    int mid = s + (e - s) / 2;

    if (arr[mid] == key)
    {
        return 1;
    }
    if (arr[mid] < key)
    {
        Binary(arr, mid + 1, e, key);
    }
    else
    {
        Binary(arr, mid - 1, s, key);
    }
}
int main()
{
    int arr[20];
    int n, key;
    cout << "enter your array size \n";
    cin >> n;
    cout << "enter your key\n";
    cin >> key;
    cout<<"enter your key element\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool answer = Binary(arr, 0, n, key);
    if(answer)
    {
        cout<<"Your Key is Present\n";
    }
    else
    {
        cout<<"your Key is not present";
    }

    return 0;
}