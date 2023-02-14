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
        return Binary(arr, mid + 1, e, key);
    }
    else
    {
        return Binary(arr, mid - 1, s, key);
    }
}
int main()
{
    int arr[20];
    int n, key;
    cout << "Enter your Array size\n";
    cin >> n;
    cout << "Enter your key value \n";
    cin >> key;
    cout << "enter your array value \n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    bool answer = Binary(arr, 0, n, key);
    //cout<< answer;
    if(answer)
    {
        cout<<"Key Found\n";
    }
    else
    {
        cout<<"Key not found";
    }

    return 0;
}