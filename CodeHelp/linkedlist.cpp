#include<iostream>
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
    ~node()
    {
        int value = this -> data;
        //memory free
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free = "<<value<<" "<<endl;
    }
};
void InsertAtHead(node* &head, int data)
{
    node* temp = new node(data);
    temp -> next = head;
    head = temp;
}
void insertAtTail(node* &tail, int data)
{
    node* temp = new node(data);
    tail -> next = temp;
    tail = tail -> next;
}
void insertAtAnyPosition(node* &head, node* &tail,int position,int data)
{
    // for first position
    if(position == 1)
    {
        InsertAtHead(head, data);
        return;
    }

    node* temp = head;
    int cnt = 1;

    while(cnt < position-1)
    {
        temp = temp -> next;
        cnt++;
    }
    //for last position
    if(temp -> next  == NULL)
    {
        insertAtTail(tail,data);
        return;
    }

    node* nodeToInsert = new node(data);
    nodeToInsert -> next =temp ->next;
    temp -> next = nodeToInsert;

}
void deleteNode(int position, node* &head)
{
    if(position == 1)
    {
        node* temp = head;
        head = head ->next;
        temp -> next = NULL;
        delete temp;
    }
        else
        {
            node* curr = head;
            node* prev = NULL;
            int cnt = 1;
            while(cnt < position)
            {
                prev = curr;
                curr = curr -> next;
                cnt++;
            }
            prev -> next = curr -> next;
            curr -> next = NULL;
            delete curr;
        }
}

void print(node* &head)
{
    node* temp = head;
    while(temp != NULL)
    {
        cout<< temp ->data<<" ";
        temp = temp ->next;
    }
    cout<<endl;
}


int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
    insertAtTail(tail,12); 
    print(head);
    insertAtTail(head,15);
    print(head);
    insertAtAnyPosition(head,tail,4,22);
    print(head);
     cout<<"head"<<head-> data<<endl;
    cout<<"tail"<<tail -> data<<endl;
  

     deleteNode(3,head);
       print(head);
   
    
   

 

    return 0;
}