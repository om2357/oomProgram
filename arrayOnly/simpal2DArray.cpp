#include<iostream>
using namespace std;
int main()
{
    int a, b;
    cout<<"enter your array value\n";
    cin>>a>>b;
    int arr[a][b];
    
    for (int i=0;i<a;i++)
    {
        for(int j =0; j<b;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"your matrix is :\n";
    for(int i=0 ;i<a;i++)
    {
        for(int j =0;j<b;j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}