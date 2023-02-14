//this is array standerd library template

#include<iostream>
#include<array>
using namespace std;
int main()
{
    int arr[6]={1,4,5,6,7,9};
    
    //stl use-->
    array<int ,5> a{1,4,5,6,7};

    int size = a.size();
    
    cout<<"array size is "<<size<<endl;

    for(int i = 0 ; i < size;i++)
    {
        cout<<a[i]<<endl;
    }

    cout<<"element at 2nd index -> "<<a.at(2)<<endl;//using .at operater

    cout<<"Empty or not -> "<<a.empty()<<endl;//using .empty operater

    cout<<"first element -> "<<a.front()<<endl;//using .font operater

    cout<<"last element -> "<<a.back()<<endl;
    

    return 0;
}