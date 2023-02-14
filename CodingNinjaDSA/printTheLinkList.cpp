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
int main()
{
    node n1(32);
    node*head = &n1;
    node n2(3);


    return 0;
}