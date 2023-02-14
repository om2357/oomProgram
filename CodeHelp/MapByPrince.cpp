#include<iostream>
#include<map>
using namespace std;
int main()
{
    
    map<int ,int> one;
    //this is first method
    //one.insert(pair<int, int>(1,35));
    //this is second method
    one.insert(2, 30);
    one.insert(4, 24);
    one.insert(3, 32);

   // print the value 
    for(auto itr = one.begin() ; itr!=one.end() ; itr++)
    {
        cout<<itr->first;
        cout<<" ";
       // cout<<itr->second;
        cout<<endl;
    }

    auto var = one.begin();
    cout<<"by var iterator "<<var->first<<var->second<<endl;

    //this is is not working properly i dont no why be careFull while using that 

    return 0;
}