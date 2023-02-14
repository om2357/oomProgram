#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;

    node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};
int main()
{
    node n1(20);
    node *head = &n1;
    node n2(30);
    node n3(33);
    n1.next = &n2;
    n2.next = &n3;
    
    cout<<n1.data<<" "<< n2.data <<" " <<n3.data<<endl;
    // try to print n1 using head pointer 

    cout<<head->data;

    // printing the linklist by using the dynamically

    node *n4 = new node(333);
    node *head = n4; 
    node *n5 = new node(231);
    node *n6 = new node(542);
    return 0;
}