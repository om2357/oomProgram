#include<iostream>
using namespace std;
class node
{
    public :
    int data;
    node* next;

    node(int data)
    {
        this -> data = data;
        next = NULL;
    }
};
int main()
{
    node * node1 = new node(19);
    

    return 0;
}