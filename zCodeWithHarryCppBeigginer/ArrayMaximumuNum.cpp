#include <iostream>
#include<climits>
using namespace std;
int main()
{
    int number;
    cout << "enter a number \n";
    cin >> number;

    int arr[number];

    for (int i = 0; i < number; i++)
    {
        cin >> arr[i];
    }

    int maxNo = INT_MIN;
    int minNo = INT_MAX;

    for (int i = 0; i < number; i++)
    {
        maxNo=max(maxNo,arr[i]);
        minNo=min(minNo,arr[i]);
    }

    cout<<"maximum number is "<<maxNo<<endl;
    cout<<"minumum number is "<<minNo;

    return 0;
}