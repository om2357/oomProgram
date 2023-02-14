#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your value \n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << "hello one \n";
        break;

    case 2:
        cout << "you are second\n";
        break;

    default:
        cout << "your are not enter a valid number\n";
    }
    return 0;
}