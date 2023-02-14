#include <iostream>
using namespace std;
int main()
{
    int a[10];

    cout << a << endl; //this array print the same array[0] and the &array
    cout << &a[0] << endl; // here Arr is behave like a address of arr[0]
    a[0] = 5;
    a[1] = 10;
    cout << *a << endl;
 
    int *p = a;
    cout<<"size of a "<<sizeof(a)<<endl;
    cout<<"size of pointer is "<<sizeof(*p)<<endl;
    cout<<"this is a address of  pointer "<<&p<<endl;  //


    cout << *(a + 1);  //this is give the value of arr[1] (second position)

    return 0;
}