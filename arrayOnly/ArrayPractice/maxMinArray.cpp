#include <iostream>
using namespace std;
int max(int num[], int size)
{
    int max = INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (num[i] > max)
        {
            cout<<"VAlue of max "<<max<<" "<<endl;
            cout<<num[i]<<" ";
            max = num[i];
        }
    }
    return max;
}
int min(int num[], int size)
{
    int Mini = INT16_MAX;
    for (int i = 0; i < size; i++)
    {
        Mini = min(Mini, num[i]);
        // if (num[i] < min)
        // {
        //     min = num[i];
        // }
    }
    return Mini;
}
int main()
{
    int size;
    cout << "enter the size of array --> " << endl;
    cin >> size;
    int arr[20];

    cout << "enter the array value --> " << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout<<"Your Min value is --> "<<min(arr,size)<<endl;
    cout<<"Your Max value is --> "<<max(arr,size)<<endl;

    return 0;
}