#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node *next;

    node(int data)
    {
       this -> data = data;
       next = NULL;
    }
};
void print(node *head)
{
    node *temp =head;
   cout<<temp -> data<<" ";
   temp = temp -> next;
   cout<<temp ->data<<" ";
   temp =  temp ->next;
   cout<<temp ->data<<" ";
   temp = temp ->next;
   cout<< temp ->data<<" ";
   temp = temp ->next;
   cout<<temp ->data<<" ";
}

//we can also do that using something loop

//if we don't want to print the last linkedList value then the condition of while loop is
//while(head -> next !=NULL)
void printing(node *head)
{
    node *temp = head;
    while(temp!= NULL)
    { 
        cout<<temp ->data<<" ";
        temp = temp ->next;
    }
}
int main()
{
    node *n1 = new node(100);
    node *head = n1;
    node *n2 = new node(200);
    node *n3 = new node(204);
    node *n4= new node (320);
    node *n5 = new node(211);

    n1 ->next = n2;
    n2 ->next = n3;
    n3 ->next = n4;
    n4 ->next = n5;

    print(head);
    cout<<endl;
    printing(head);

    return 0;
}