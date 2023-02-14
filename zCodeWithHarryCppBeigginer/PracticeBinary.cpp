#include <iostream>
using namespace std;
int binarySearch(int arr[], int num, int key)
{
    int s = 0;
    int e = num;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        
    }
    return -1;
}
int main()
{

    int num;
    cout << "enter your number \n";
    cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "enter your key\n";
    cin >> key;
    cout << "your index Number is "<< binarySearch(arr, num, key);
    return 0;
}