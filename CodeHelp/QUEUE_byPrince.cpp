#include<iostream>
#include<queue>
using namespace std;
//Queue is a container
//Queue have a concept of FIFO (first in first out)
void print_stack(queue<int> q)
{
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }

}   
int main()
{
    queue<int> q;
    q.push(20);
    q.push(32);
    q.push(22);
    q.push(10);
    q.push(42);
    
    cout<<"your element of QUEUE is : ";
    print_stack(q);
    cout<<endl;
    cout<<"your size of QUEUE is : "<<q.size()<<endl;
    cout<<"your front element is : "<<q.front()<<endl;
    cout<<"your back element is : "<<q.back()<<endl;



    return 0;
}