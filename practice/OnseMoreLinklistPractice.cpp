#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* next;

    node(int data)
    { 
        this ->data = data;
       this -> next = NULL;
    }
    
    ~node()
    {
        int value = this ->data;
        //memory free
        if(this -> next != NULL)
        {
            delete next;
            this ->next = NULL;
        }
        cout<<" memory is free for node with data "<<value<<endl; 
    }
};

void takeInputInHead(node* &head ,int data)
{
    node* temp = new node(data);
    temp ->next = head;
    head = temp;

}
void takingInputInTail(node* &tail,int data)
{
    // creating new node
    node *temp = new node(data);
    tail -> next = temp;
    tail = tail ->next;
}
void insertAtPosition(node*& tail, node* &head, int data, int positon)
{
    node* temp = head;

    if(positon == 1)
    {
        takeInputInHead(head,data);
        return;
    }
    //inserting at last postion
    if(temp -> next == NULL)
    {
        takingInputInTail(tail,data);
    }
    int cnt = 1;
    while(cnt < positon - 1)
    {
        temp = temp -> next;
        cnt ++;
    }


    node* nodeToInsert = new node(data);
    nodeToInsert ->next = temp ->next;
    temp -> next = nodeToInsert;

}
void deleteNode(node* &head,int postion)
{

    //we can assume the postion of element is liy betwin somwhere 
    

    if(postion == 1)
    {
        node* temp = head;  
        // deleting first node
        head = head -> next;
        // memory free
        delete temp;
    }
    else
    {
        //deleting any middle node or last node
        node* current = head;
        node* prev    = NULL;

        int cnt = 1;

        while(cnt <= postion)
        {
            prev = current;
            current = current -> next;
            cnt++;
        }

        prev ->next = current-> next;
        delete current;

    }


}
void print(node*& head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<< temp->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}

int main()
{
    node* node1 = new node(20);
    node * head = node1;
    node* tail = node1;
    print(head);
    takingInputInTail(tail,22);
    print(head);

    return 0;
}