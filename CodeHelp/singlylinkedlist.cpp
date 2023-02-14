#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;

    // constructer
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~node()
    {
        int value = this -> data;
        if(this -> next != NULL)
        {
            delete next;
            this -> next = NULL;
        }
        cout<<"memory is free for node = "<<value<<endl;
    }
};
void insertAtHead(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}
void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}
void insertAtPosition(node *&head, node *&tail, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }
    node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }
    node *nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}
void deleteNode(node *&head, int position)
{
    if (position == 1)
    {
        node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else
    {
        int cnt = 1;
        node *curr = head;
        node *prev = NULL;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
}
void print(node *&head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;
    insertAtHead(head, 10);
    insertAtTail(tail, 1);
    insertAtPosition(head, tail, 2, 5);
    insertAtPosition(head, tail, 2, 55);
    insertAtPosition(head, tail, 5, 15);
    insertAtPosition(head, tail, 7, 666);
    print(head);
    deleteNode(head,1);
    print(head);
    deleteNode(head,1);
    print(head);
    deleteNode(head,4);
    print(head);
    
    deleteNode(head,4);


    print(head);

    return 0;
}