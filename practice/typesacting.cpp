#include<iostream>
using namespace std;
int main()
{
    int i = 65;
    char c= i;
    cout<<c;

    int *p = &i;
    char *pc = (char*)p;
    cout <<*p<<endl;
    cout<<p<<endl;
    cout<<pc;

    return 0;
}