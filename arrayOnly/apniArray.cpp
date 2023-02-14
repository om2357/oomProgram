//Wrong implimetation of funtion Be carefull in this program :)(:
#include <iostream>
using namespace std;
int printArray(int arr[])
{
    int n;
    cout<<"printing the array value";
    for(int i =0 ;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int n;
    cout << "enter the array Size \n";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter the array value : ";
        cin >> arr[i];
    }

    for (int i = 0;i<n ;i++)
    {
        cout<<"your array value is : "<<arr[i]<<endl;
    }
    printArray(arr);

    return 0;
}
