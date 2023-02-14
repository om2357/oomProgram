#include <iostream>
#include <stack>
using namespace std;
int main()
{

    // stack is LIFO = Last in first out "phale jao baad me aaoo, baad me jao phale aaoo"

    stack<int> firstTime;
    firstTime.push(3);
    firstTime.push(11);
    firstTime.push(11);
    firstTime.push(2);
    cout << "printing top element " << firstTime.top()<<endl;

    firstTime.push(31);
    cout << "printing top element " << firstTime.top()<<endl;
    firstTime.pop();

    cout << "printing top element " << firstTime.top()<<endl;

    if(firstTime.empty())
    {
        cout<<"stack is empty"<<endl;
    }
    else
    {
        cout<<"stack is not empty "<<endl;
    }
    cout<<"Size of stack is "<< firstTime.size();

    return 0;
}