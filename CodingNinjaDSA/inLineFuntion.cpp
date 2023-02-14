// we have finding gretest number with using IN LINE FUNTION
//**********************************************************

#include <iostream>
using namespace std;

int max(int c, int d)
{
    return (c > d) ? c : d;
}
int main()
{
    int a, b, c;
    cout << "enter the value of A and B\n";
    cin >> a >> b;
    if (a > b)
    {
        c = a;
    }
    else
    {
        c = b;
    }
    cout << c << endl;

    // other wise wee can use ternary operator

    (a > b) ? a : b; // if condition true then print a other wise b
    // and we can also write this for small number int c= (a>b)?b:a
    cout << "this is output of ternary operator " << c << endl;

    int x, y;
    x = 433;
    y = 33;
    // int z = (x > y) ? x : y; or we can only write this 
    int z = max (x,y);
    cout << "this is output of Z :" << z << endl;

    // if i use multiple times of condition so then we can make a funtion
    //but ont thing is that ,when i creat function then ever single time when i call funtion then call is waiting for that answer 
    //so  because of that we can use INLINE function if our code is 1 or 2 line then our compiler is simply copy that code in every callig
    //if our  funtion is more then 3 line then compiler is never do that for me  ...
    return 0;
}