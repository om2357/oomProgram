#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    *p = 10;
    cout << "your value in dynamic memory is --> " << *p << endl;
    double *pd = new double;
    *pd = 10.332;
    cout << "your value of double in dynamic memory is --> " << *pd << endl;

    int *arr = new int[50];
    int n;
    cout << "enter the number of element " << endl;
    cin >> n;
    delete[] arr;
    int *arr2 = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    int max = -100;
    for (int i = 0; i < n; i++)
    {
        if (max < arr2[i])
        {
            max = arr2[i];
        }
    }
    cout << "your max value is " << max << endl;
    delete p, delete pd, delete[] arr2;

    return 0;
}