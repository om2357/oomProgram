#include <iostream>
using namespace std;
int main()
{

    int a, b, c;

    cout<<"enter you three numbers\n";
    cin >> a >> b >> c;
    if ((a > b) && (a > c))
    {
        cout <<"your greatest number is  " <<a;
    }
    else if ((c > a) && (c > b))
    {
        cout <<"your greatest number is  " <<c;
    }

    else
        cout <<"your greatest number is  "<< b;
    return 0;
}