#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter your array value\n";
    cin >> a >> b;
    int arr[a][b];

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cin >> arr[i][j];
        }
        cout << endl;
    }

    cout << "your matrix is :" << endl;

    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int x;
    cout << "enter your key value for searching in array\n";
    cin >> x;

    bool flag = false;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= b; j++)
        {
            if (arr[i][j] == x)
            {
                //cout << "element is found\n";
                flag = true;
            }
           
        }
    }
    if(flag)
    {
        cout<<"element is found : ";
    }
    else
    {
        cout<<"element is not found ";
    }
    return 0;
}