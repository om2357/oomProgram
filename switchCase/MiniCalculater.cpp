#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of 'a'\n";
    cin >> a;
    cout << "enter the value of 'b'\n";
    cin >> b;

    char op;
    cout << "enter the Operation you want to perform \n";
    cin >> op;
    switch (op)
    {
    case '*':
        cout << (a * b) << endl;
        break;

    case '+':
        cout << (a + b) << endl;
        break;

    case '/':
        cout << (a / b) << endl;
        break;

    case '%':
        cout << (a % b) << endl;
        break;

    case '-':
        cout << (a - b) << endl;
        break;

    default : cout<<"you are not enter a Valid character \n";
    }
    return 0;
}