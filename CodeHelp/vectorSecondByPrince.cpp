#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(22);
    v.push_back(32);
    
    v.insert(v.begin()+3,-2);
    v.erase(v.begin());
    cout<<endl;
    cout<<"your size is : "<<v.size()<<endl;
    cout<<"your total capacity is : "<<v.capacity()<<endl;;
    

    //another way to iterate the all values using for loop

    for(auto it = v.begin(); it!=v.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;

    


    return 0;
}