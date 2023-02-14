// WAP to implemant single inharetanse 
#include<iostream>
using namespace std;

class base  //base class 
{
    public :
    int x=10;
};
class derived : public base  //derived class
{
    public :
    int y=20;
};
int main ()
{
    derived d;
    cout<<"y from derived class is"<< d.y<<endl;
    cout<<"x from base class is"<< d.x;

    return 0;
}