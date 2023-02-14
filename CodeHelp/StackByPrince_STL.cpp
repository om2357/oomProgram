//stak is last in first out

#include<iostream>
#include<stack>
using namespace std;
void printStackElement(stack<int> s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
    cout<<endl;
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(-4);
    s.push(10);
    s.push(32);

    cout<<"stack is empty or not : "<<s.empty()<<endl;
    cout<<"size of stack is : "<<s.size()<<endl;
    int size = (int)s.size();
    cout<<size<<endl;
    cout<<"your stack value is : "<<endl;
    printStackElement(s);

    return 0;
}
