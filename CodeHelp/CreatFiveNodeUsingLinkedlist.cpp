//creating five nodes using Linked list by the Staticaly
#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node *next;
    // making constructer for data;

    node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};
int main()
{
    node n1(10);
    node *head = &n1;
    node n2(20);
    node n3(30);
    node n4(40);
    node n5(53);
    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = &n4;
    n4.next = &n5;




    return 0;
}