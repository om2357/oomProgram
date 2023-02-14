#include<iostream>
using namespace std;
int sort(int arr[],int n)
{
    int f = 0,s = 0,t = 0;
    for(int i = 0 ; i<n; i++)
    {
        if(arr[i]==0)
        {
           f++;
        }
        else if(arr[i]==1)
        {
           s++;
        }
        else
        {
            t++;
        }
    }

    for(int i = 0; i<f;i++)
    {
       arr[i]=0;
    }
    for(int i = f;i<f+s;i++)
    {
        arr[i]=1;
    }
    for(int i = f+s;i<f+s+t;i++)
    {
        arr[i]=2;
    }

}
int main()
{
    int n;
    int arr[20];
    cout<<"enter the size of array\n";
    cin>>n;
    cout<<"enter the value of array in 0s,1s&2s"<<endl;
    for (int i = 0; i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,n);
    cout<<"your sorted value is : ";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}