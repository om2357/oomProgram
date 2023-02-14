#include<iostream>
using namespace std;
int partition(int arr[],int start ,int end)
{
    int pivot = arr[start];

    int count = 0;

    for(int i = start + 1 ; i <= end;i++)
    {
        if(arr[i]  <= pivot)
        {
            cout<<"hiii";
            count ++;
        }
    }
    int PivotIndex = start + count;
    swap(arr[PivotIndex],arr[start]);

    int i = start ;
    int j = end ;

    while(i<PivotIndex && j > PivotIndex)
    {
        while(arr[i] <= pivot)
        {
            i++;
        }

        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<PivotIndex && j > PivotIndex)
        {
            swap(arr[i++],arr[j--]);
            
        }
    }

    return PivotIndex;
}
int QuickSort(int arr[],int start,int end)
{
    if(start>=end)
    {
        return 0;
    }
    // partion karna h 

    int p = partition(arr,start,end);

    QuickSort(arr,start,p-1);
    QuickSort(arr,p+1,end);
}
int main()
{
    int arr[20];
    int n;
    cout<<"Enter your Array size\n";
    cin>>n;
    cout<<"Enter your value for Quick Sort\n";
    for(int i = 0; i<n ; i++)
    {
        cin>>arr[i];
    }

    //int answer = 
    QuickSort(arr,0,n);
    //cout<<answer;

    for(int i = 0 ; i <n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}