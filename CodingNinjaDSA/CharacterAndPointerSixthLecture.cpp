#include <iostream>
using namespace std;
int main()
{
    int a[] = {1, 3, 4, 2, 5};
    char b[] = "abcew";
    cout << "\n\nwhen i print (a) element then i got only address of array :";
    cout<< a;
    cout << "\n\nin the same thing when i do for char it's print the all value of char :";
    cout<< b;

    char*c=&b[0];
    cout<<endl<<c<<endl;
    cout <<"\nin the char not print the address of char this is little bit behabe diffrent compare to int array "<<endl;


    char c1='s';
    char *p = &c1;
    cout <<c1<<endl;
    cout<<"here actually print the address of c1 or p but not .... here print the value : "<<p;

    return 0;
}