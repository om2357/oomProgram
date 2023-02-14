#include <iostream>
using namespace std;
bool is_sorted(int a[], int size)
{
    if (size == 0 || size == 1)
    {
        return true;
    }
    if (a[0] > a[1])
    {
        return false;
    }
    bool isSmallSorted = is_sorted(a + 1, size - 1);

    if (isSmallSorted)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int size;
    cout << " enter your array size value \n";
    cin >> size;
    int a[size];
    cout << "enter your array value \n";
    for (int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << is_sorted(a, size);

    return 0;
}