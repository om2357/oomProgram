#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // creating constructer for data
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
int main()
{
    // how to create staticall

    // Node n1(1);

    // Node *head = &n1;
    // Node n2(2);
    // n1.next = &n2;
 
    // cout << n1.data<<endl;
    // cout<<n2.data<<endl;

    // cout<<"data usind head pointer : "<<head->data;
    // Creating a node using dynamically 

    cout<<"using dynamic allocation\n";
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    n1 -> next = n2;  
    cout<<head->data<<endl;
    cout<<n2->data<<endl;
     

    return 0;
}