/*
  use of linklist
   
    1 -> stack and queues
    2 -> musicPlayer
    3 -> image gallery
    4 -> Browser
    5 -> hash map & hash set  

*/
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;

    node(int data)
    {
        this-> data = data;
        next = NULL;
    }
};
int main()
{
    node n1(12);
    node *head = &n1;
    node n2(22);
    node n3(32);
    node n4(23);
    n1.next = &n2; 
    n2.next = &n3;
    n3.next = &n4;
    

    cout<<"your address of head is : "<<head->next<<endl;
    cout<<"your data of head is : "<<head->data<<endl;

    // dynamically 

    node *n5 = new node(10);
    node* head = n5;
    node *n6 = new node(20);
    node *n7 = new node(71);
    n5 -> next = n6;
    n6 -> next = n7;
    

    return 0;
}