#include <iostream>
using namespace std;
int main()
{
    int num;
    int mx = -199999;

    cout << "enter a number \n";
    cin >> num;
    int arr[num];
    for (int i = 0; i < num; i++)
    {
        cout << "enter your array value \n";
        cin >> arr[i];
    }

    for (int i = 0; i < num; i++)
    {
        mx = max(mx, arr[i]);
       
    }
     cout << "your max array value is " << mx << endl;
    return 0;
}