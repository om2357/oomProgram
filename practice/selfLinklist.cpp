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
        next = NULL;
    }
};
void insert_data(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node *&tail, int data)
{
    node *temp = new node(data);
    tail->next = temp;
    tail = tail->next;
}

void insertAtPosition(node *&tail, node *&head, int position, int data)
{
    if (position == 1)
    {
        insert_data(head, data);
        return;
    }
    int cnt = 1;
    node *temp = head;

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
    // creating a node
    node *node_to_insert = new node(data);
    node_to_insert->next = temp->next;
    temp->next = node_to_insert;
}
void print(node *&head)
{
    node *temp = head;
    while (head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    node *node1 = new node(10);
    node *head = node1;
    node *tail = node1;

    insertAtTail(tail, 20);
    insertAtTail(tail, 30);
    insertAtPosition(tail, head, 2, 888);
    cout << "head = " << head->data << endl;
    cout << "tail = " << tail->data << endl;
    print(head);

    return 0;
}