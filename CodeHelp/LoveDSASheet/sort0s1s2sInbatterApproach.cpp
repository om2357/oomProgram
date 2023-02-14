#include <iostream>
using namespace std;
// sorting the 0s 1s and 2s using a batter approach
int sort(int arr[], int n)
{
    int l = 0;
    int m = 0;
    int h = n-1;
    while (m <= h)
    {
        int x = arr[m];
        if (x == 0)
        {
            swap(arr[l],arr[m]);
            l++;
            m++;
        }
        else if (x == 1)
        {
            m++;
        }
        else
        {
            swap(arr[h], arr[m]);
            h--;
        }
    }
}
int main()
{
    int n;
    int arr[20];
    cout <<"enter the size of arry\n";
    cin >> n;
    cout<<"enter the value of arry in 0s 1s and 2s\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     sort(arr,n);
    cout<<"your sorted arry is : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    return 0;
}