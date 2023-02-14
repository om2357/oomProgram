#include<iostream>
using namespace std;
int index(int arr[],int size,int x)
{
    if(size==0)
    {
        return -1;
    }
    if(arr[0]==x)
    {
        return 0;
    }
    int something =index(arr+1,size-1,x);
    return something;
    if(something=-1)
    {
        return -1;
    }
    else 
    {
        return something +1;
    }

}
int main()
{
    int size;
    
    cout<<"enter your array value\n";
    cin>>size;
    
    
    
    int arr[size];
    for(int i =0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    int x;
    cout<<"enter your value X\n";
    cin>>x;

    cout<<"your Array index value is"<<index(arr,size,x);
    return 0;
}