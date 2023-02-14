#include <iostream>
using namespace std;
// circularSingleLinklist
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void insertAttail(Node *&tail, int element, int data)
{
    //  creating new node if no node is found
    if (tail == NULL)
    {
        Node *temp = new Node(data);
        tail = temp;
        temp->next = temp;
    }
    // searching where the data have to insert
    else
    {
        // we thinking element is present
        Node *curr = tail;
        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found

        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}
void deletNode(Node *&tail, int value)
{
    if (tail == NULL)
    {
        cout << "Linked list is empty, please check onse again ";
    }
    else
    {
        Node *prev = tail;
        Node *curr = prev->next;

        while (curr->data != value)
        {
            prev = curr;
            curr = curr->next;
        }

        prev->next = curr->next;
        if (tail == curr)
        {
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }
}
void print(Node *tail)
{
    Node *temp = tail;
    // cout<<"tails first data -> "<< tail -> data << " "<<endl;
    // while(tail -> next != temp)
    // {
    //     cout<< tail -> data <<" ";
    //     tail = tail -> next;
    // }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}
int main()
{
    Node *tail = NULL;
    insertAttail(tail, 5, 3);
    // insertAttail(tail, 3, 12);
    // insertAttail(tail, 3, 12);
    insertAttail(tail, 3, 2);
    insertAttail(tail, 3, 42);
    insertAttail(tail, 42, 42);
    insertAttail(tail, 42, 45);
    insertAttail(tail, 42, 1);
    insertAttail(tail, 3, 111);
    print(tail);
    deletNode(tail, 3);    
    deletNode(tail, 111);    

    print(tail);
    return 0;
}