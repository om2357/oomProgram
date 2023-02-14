#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a = 34, b = 336, c = 3233, d = 32226;

    cout << "using iomanip header file" << setw(7) << a << endl;
    cout << "using iomanip header file" << setw(7) << b << endl;
    cout << "using iomanip header file" << setw(7) << c << endl;
    cout << "using iomanip header file" << setw(7) << d << endl;

    cout << "without using iomanip header file ---->" << a << endl;
    cout << "without using iomanip header file ---->" << b << endl;
    cout << "without using iomanip header file ---->" << c << endl;
    cout << "without using iomanip header file ---->" << d << endl;

    return 0;
}