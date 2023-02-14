#include <iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        this->next = NULL;
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
int print(node *&head)
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
    node *node1 = new node(20);
    node *head = node1;
    node *tail = node1;

    insertAtHead(head, 12);
    insertAtHead(head, 200);
    insertAtTail(tail, 33);
    print(head);

    return 0;
}