#include <iostream>
using namespace std;
int Merge(int arr[], int start, int mid, int end)
{
    int ExtraArray[end - start + 1];
    int i = start;
    int j = mid + 1;

    int indexNumber = 0;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            ExtraArray[indexNumber] = arr[i];
            i++;
            indexNumber++;
        }
        else
        {
            ExtraArray[indexNumber] = arr[j];
            j++;
            indexNumber++;
        }
    }

    while(i<=mid)
    {
        ExtraArray[indexNumber] = arr[i];
        i++;
        indexNumber++; 
    }
    while(j<=end)
    {
        ExtraArray[indexNumber] =arr[j];
        j++;
        indexNumber++;
    }
    int store = 0;
    for(int i = start; i <=end;i++)
    {
       // cout<<"hii"<<endl;
        arr[i]= ExtraArray[store];
        store++;
        
    }
}
    int MergeSort(int arr[], int start, int end)
    {
        if (start >= end)
        {
            return 0;
        }
        int mid = start + (end - start) / 2;
        MergeSort(arr, start, mid);
        MergeSort(arr, mid + 1, end);

        Merge(arr, start, mid, end);
    }

    int main()
    {
        int arr[20];
        int n;
        cout << "etner your rray size\n";
        cin >> n;
        cout << "enter your element for mere sort \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int answer = MergeSort(arr, 0, n);
        //cout<<answer;
        for(int i = 0; i<n ; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        return 0;
    }

