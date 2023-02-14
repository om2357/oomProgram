#include <iostream>
using namespace std;
// 8th lecture how does pointer and funtion are work together
void print(int *p)
{
    cout << *p << endl;
}

void incrementPointer(int *p)
{
    p = p + 1; // here it's not change are reflect because i change in my copy  here i increase 4bit in my copy address
}

void increment(int *p)
{
    (*p)++; // here change is reflect because i go in the address and change the value in this address
            // so when go the same address then i got some other value that's why change is reflected
}

int main()
{

    int i = 10;
    int *p = &i;
    print(p);

    cout << p << endl;
    incrementPointer(p);
    cout << p << endl; // here it's not change are reflect because i change in my copy

    cout << *p << endl;
    increment(p);// here change is reflect because i go in the address and change the value in this address
    cout << *p << endl;// so when go the same address then i got some other value that's why change is reflected
    return 0;
}