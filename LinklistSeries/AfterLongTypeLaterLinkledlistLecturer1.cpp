#include <iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;

    node(int data)
    {
        this -> data = data;
        this -> next = NULL;
    }
};
void print(node* &head)
{
    //creating pointer
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp-> data<<" ";
        temp = temp -> next;
    }    
    cout<<endl;
}


void insertAtHead(node* &head, int data)
{
    //creating new node
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
int main()
{
    // linkedList is a type of dataStructure, and it is a basicaly a collecation of nopde
    // this is a dynamic data structure and we can easly grow and shrink in run time
    // no memory westage
    // deletion is very easy

    node* node1 = new node(10);

    cout<<node1 ->data<< endl;
    cout<<node1 ->next<< endl;
    node* head = node1;
    insertAtHead(head,20);
    print(head);  


    return 0;
}