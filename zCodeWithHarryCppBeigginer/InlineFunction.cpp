#include <iostream>
using namespace std;

inline int add (int a, int b)
{
    return (a+b);
}
int a, b ;//c;
int main()

{
   cout<<"enter your addition value\n";
   cin>>b>>a;
//    int c =add( a, b);
   cout<<"addition of two values is\n"<<add(a,b);

    return 0;
}
