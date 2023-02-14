#include <iostream>
using namespace std;
void print(int arr[], int n)
{
    cout <<"Size of array "<< n;

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
bool LinearSearch(int arr[], int size, int key)
{
    print(arr, size);
    if (size == 0)
    {
        return 0;
    }
    if (arr[0] == key)
    {
        return 1;
    }
    else
    {
        bool remaningPart = LinearSearch(arr + 1, size - 1, key);
        return remaningPart;
    }
}
int main()
{
    int arr[20];
    int n, key;
    cout << "enter your array Size\n";
    cin >> n;
    cout << "Enter your key value for searching \n";
    cin >> key;
    cout << "enter your Array Vslue\n";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool search = LinearSearch(arr, n, key);
    

    if (search)
    {
        cout << "Your key is present : ";//<<search<<endl;
    }
    else
    {
        cout << "your key is not Present";
    }
    return 0;
}