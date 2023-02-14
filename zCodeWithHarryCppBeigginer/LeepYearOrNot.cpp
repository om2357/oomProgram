#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << "enter a year for leep year or not\n";

    cin >> year;

    if (year % 4 == 0)
    {
        if (year % 100 == 0)
        {
            if (year % 400 == 0)
            {
                cout << "it is a leep year\n";
            }
            else
            {
                cout << "it's not a leep year\n";
            }
        }
        else
        {
            cout << "it is not a leep year(2)\n";
        }
    }
    else
    {
        cout << "it is not a leep year (3)\n";
    }

    return 0;
}