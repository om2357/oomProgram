#include<iostream>
using namespace std;
int main()
{
    int t;
    cout<<"enter your t value\n";
    cin>>t;
    while(t--)
    {
        int n;
        cout<<"enter your value of N\n";
        cin>>n;
        int arr[20];

        for(int i = 0;i<n;i++)
        {
            cin>>arr[i];
        }
        int last = arr[n-1];

        for(int i = n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[0] = last;
        
        for(int i = 0; i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


    return 0;
}