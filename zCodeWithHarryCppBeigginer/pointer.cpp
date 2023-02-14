#include <iostream>
using namespace std;
int main()
{
    // pointer is a data type witch store or hold the addres of other data type

    int a = 3;
    int *b = &a;
    // &-----> address of operator

    cout << b << endl;
    cout << &a << endl;
    // * value at derefrence operator
    cout <<"value at address b is "<< *b << endl;
    cout <<"value at address b is "<< &a << endl;

    // pointer to pointer
    int** c=&b;
    cout<<"the address of second pointer b (or pointer to pointer ): "<<c<<endl;
    return 0;
}
