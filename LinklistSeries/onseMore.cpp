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
void print(node *&head)
{
    node *temp = head;

    while (head != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insert_data(node *&head, int data)
{
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

int main()
{

    node *node1 = new node(10);
    node *head = node1;
    insert_data(head, 20);
    print(head);
  
    return 0;
}
