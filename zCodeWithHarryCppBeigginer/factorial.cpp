#include <iostream>
using namespace std;
int main()
{
    int factorial, x;
    cout<<"enter your value \n";
    cin >> x;
    factorial = x;

    while (x > 1)
    {
        x--;

        factorial = factorial * x;   
    }
    if (factorial == 0 && 1)
    {
        cout << "factorial is 1\n";
    }
    else
    {
        cout<<"the factorial is "<<(double)factorial;
    }

    return 0;}
