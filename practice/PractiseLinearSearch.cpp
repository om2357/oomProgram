#include<iostream>
using namespace std;
bool search(int arr[],int key,int n )
{
    for(int i = 0; i<n ;i++)
    {
        if(arr[i]==key)
        {
            return 1;
        }
    }
    return 0;
}
int main()
{
    int arr[20];
    int n,key;

    cout <<"enter the array size : ";
    cin>>n;
    cout<<"enter your key vallue : ";
    cin>>key;

    for(int i = 0 ; i<n;i++)
    {
        cin>>arr[i];
    }
    bool found =search(arr,key,n);
    if(found)
    {
        cout<<"your key value is present : "<<key ;
    }
    else
    {
        cout<<"youir key value is not present ";
    } 
    return 0;
}