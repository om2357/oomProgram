#include<iostream>
#include <climits>
using namespace std;

int main()
{
    int max = INT_MIN;
    int min = INT_MAX;
    int n;

    int arr[10];
    cout<<"Enter the size of Array -> ";
    cin>>n;
    cout<<"Enter the array value -> ";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
        
    }
    cout<<"Your min value is -> " <<min<<endl;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            
        }
        
    }
    cout<<"Your Max value is -> " <<max<<endl;


    return 0;
}