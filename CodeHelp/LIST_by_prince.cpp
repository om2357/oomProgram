#include<iostream>
#include<list>
using namespace std;
void print_list_element(list<int> l)
{
    list<int> :: iterator it;
    for(it = l.begin();it!=l.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
}
int main()
{
    list<int> list1;
    //creating iterator 
    list<int> :: iterator it;
    list1.push_back(20);
    list1.push_back(31);
    list1.push_back(44);
    list1.push_back(35);
    list1.push_back(54);

    it = list1.begin();
    cout<<"your first element is : "<<*it<<endl;
    
    cout<<"your list element is : ";
    print_list_element(list1);

    
    return 0;
}