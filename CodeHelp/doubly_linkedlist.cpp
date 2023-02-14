#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* prev;
    node* next;

    //making constructor

    node(int data)
    {
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }
};
int nodeLength(node* &head)
{
    int length = 0;
    node* temp = head;
    while(temp != NULL)
    {
        length++;
        temp = temp -> next;        
    }
    return length;
}
void insertAtHead(node* &head,int data)
{
    node* temp = new node(data);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
}
void insertAtTaill(node* &tail,int data)
{
    node* temp = new node(data);
    tail -> next = temp;
    temp -> prev = tail;
    tail = temp; 
}
void insertAtposition(node* &head,int position,int data)
{
    // insert at first position
    
    if(position == 1)
    {
        insertAtHead(head,data);
        return;
    }
    node* temp = head;
    int cnt = 1;

    while(cnt < position - 1)
    {
        temp = temp -> next;
        cnt++;
    }
    if(temp -> next = NULL)
    {
        insertAtTaill(head,data);
        return;
    }
    node* nodeToInsert = new node(data);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}
void print(node* &head)
{
    node *temp = head;
    while(temp != NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    
    insertAtHead(head,33);
    insertAtHead(head,3);
    insertAtHead(head,10);
    print(head);
    insertAtTaill(tail,40);
    insertAtTaill(tail,20);
    print(head);
    cout<<"your Node length is = "<<nodeLength(head)<<endl;

    return 0;
}