#include<iostream>
using namespace std;
bool sorted(int arr[],int size)
{
    if (size == 0|| size==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    bool smallerSorted =sorted(arr+1,size -1);
    return smallerSorted;


}
int main()
{

    int size;
    cout<<"enter array value \n";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i = 0;i<size;i++)
    {
        cout<<arr[i] <<" "<<endl;
    }

    cout<<"your answer is : "<<sorted(arr,size);

    return 0;
}