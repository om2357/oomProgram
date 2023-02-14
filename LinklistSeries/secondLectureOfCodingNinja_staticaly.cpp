#include <iostream>
using namespace std;
class node
{
    public :

    int data;
    node *next;

    node(int data)
    {
        this ->data = data;
        next = NULL;
    }

};
void print(node *head)
{
    node *temp = head;

    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp ->next;
    }

    

}
int main()
{
    
    node n1(34);
    node *head = &n1;
    node n2(42);
    node n3(22);
    node n4(33);
    node n5(23);
    node n6(52);

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    n5.next = &n6;

    print(head);

    return 0;

}