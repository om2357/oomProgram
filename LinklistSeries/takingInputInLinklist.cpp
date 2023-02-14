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
node* take_input()
{
    int data;
    cin>> data;
    node *head = NULL;

    while(data != -1)
    {
        node *newnode = new node(data);
        if(head == NULL)
        {
            head = newnode;
        }
        else
        {
            node *temp = head;

            while(temp -> next != NULL)
            {
                temp = temp ->next;
            } 
            temp -> next = newnode;
        }
        cin>>data;
    }
    return head;
}    
 void print(node *head)
    {
        node *temp = head;
        while(temp != NULL)
        {
            cout<<temp-> data<<" ";
            temp = temp ->next;
        }
    }
int main()
{
    node n1(23);
    node *head = &n1;
    node n2(42);
    node n3(44);
    node n4(33);
    node n5(92);
    

    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;
    
   print(head);
   cout<<"Enter your linklist value :-"<<endl;
   take_input();

   return 0;
}