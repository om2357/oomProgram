#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "enter your age\n";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "your age is 18\n";
        break;
    case 22:
        cout << "your  age is 22\n";
        break;
    default:
        cout << "no specal case\n";
        break;
    }

    return 0;
}
