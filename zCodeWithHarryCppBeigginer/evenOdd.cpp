#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter your number\n";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << num << " is a even number\n";
    }

    else
    {
        cout << num << " is a odd number";
    }
    return 0;
}