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
    //statically 
    node n1(1);
    node *head = &n1;
    node n2(4);
    cout<< n1.data<<" "<<n2.data<<endl;
    

    return 0;
}