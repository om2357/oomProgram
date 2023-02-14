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
        this-> next = NULL;
    }
};
    void InsertAtHead(node* &head, int data)
    {
        node* temp = new node(data);
        temp -> next = head;
        head = temp;
    }
    void print(node* &head)
    {
        node* temp = head;
        while(temp != NULL)
        {
            cout<<temp ->data <<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

int main()
{
    node* node1 = new node(19);
    node* head = node1;
    InsertAtHead(head,21);
    print(head);

    return 0;
}