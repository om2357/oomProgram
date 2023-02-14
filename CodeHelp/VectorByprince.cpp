#include<iostream>
using namespace std;
#include<vector>
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(32);
    //for printing the value of vector
    
    v.pop_back(); //removing the last element

    int size = (int)v.size(); //for knowing the size of vector
    cout<<"first for loop\n";
    for(int i = 0 ; i <size;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
     cout<<"second for loop"<<endl;


    for(int i = 0;i<4;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    auto a = v.begin(); //its provide iterator which point first element of the vector
    cout<<"using iterator begin()"<<endl;
    cout<<"first element : "<<a[0]<<endl;
    cout<<"second element : "<<a[1]<<endl;
    cout<<"third element : "<<a[2]<<endl;




    return 0;
}