//  we can also write function code using funtion prototype

#include <iostream>
using namespace std;

int sum(int a, int b); // it is a funtion prototype wher we can only showing the sum
// int sum(int a, b);        //this is not acceptable
// int sum (int ,int);       //this is acceptable
int main()            // using this prototype we can give assurity, that later i can use sum this funtion
{
    int num1, num2;
    cout << "enter your first value\n --> ";
    cin >> num1;                             //  num1 & num2 are actual parameter
    cout << "enter your second value\n -->"; // a & b are formal parameter
    cin >> num2;
    cout << "the sum is " << sum(num1, num2);
    return 0;
}

int sum(int a, int b)
{

    int c = a + b;

    return c;
}

