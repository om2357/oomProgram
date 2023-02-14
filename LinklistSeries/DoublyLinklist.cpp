#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
        this->prev = NULL;
    }
    ~Node()
    {
        int val = this->data;

        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Memory is free -> " << val;
    }
};
void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;

    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *tail, int data)
{
    if (head == NULL)
    {
        Node *temp = new Node(data);
        head = temp;
        tail = temp;
    }
    Node *temp = new Node(data);
    temp->next = head;
    head->prev = temp;
    head = temp;
}
void insertAtTail(Node *&tail, Node *&head, int data)
{
    // if (tail = NULL)
    // {
    //     Node *temp = new Node(data);
    //     tail = temp;
    //     head = temp;
    // }
    Node *temp = new Node(data);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}
void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, head, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}
void deleteNode(int position, Node *&head)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
    }

    Node *curr = head;
    Node *prev = NULL;
    int cnt = 1;

    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    curr->prev = NULL;
    prev->next = curr->next;
    curr->next = NULL;
}
int main()
{
    Node *node1 = new Node(12);
    Node *head = node1;
    Node *tail = node1;
    insertAtHead(head, tail, 22);
    insertAtHead(head, tail, 31);
    insertAtHead(head, tail, 74);
    print(head);
    insertAtTail(tail, head, 42);
    insertAtTail(tail, head, 52);
    insertAtTail(tail, head, 52);
    // print(head);
    insertAtPosition(head, tail, 555, 3);
    insertAtPosition(head, tail, 101, 1);
    insertAtPosition(head, tail, 101, 2);
    // print(head);
    deleteNode(2, head);
    print(head);

    return 0;
}