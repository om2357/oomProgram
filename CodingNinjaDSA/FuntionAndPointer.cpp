#include <iostream>
using namespace std;

void print(int *p)
{
    cout << *p << endl; // first step
}

void incrementPointer(int *p)
{
    p = p + 1; // second time  :hear we can increment the pointer  but only in copy of this pointer
               // soo change is not reflect
}

void increment(int *p)
{
    (*p)++; //here we can increase the addres that's why change is reflect  
}
int main()
{
    int i = 10;
    int *p = &i;

    print(p); // first
    cout << p << endl;
    incrementPointer(p); // second
    cout << p << endl;
    cout << *p << endl;
    increment(p); //theerd 
    cout << *p << endl;
    return 0;
}