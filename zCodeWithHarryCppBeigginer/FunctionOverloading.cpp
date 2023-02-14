#include <iostream>
using namespace std;

int add(int a, int b, int c)
{
    cout << "funtion 1\n";
    return (a + b + c);
}

int add(int a, double b)
{
    cout << "funtion 2\n";
    return (a + b);
}
double add(double a, double b)
{
    cout << "funtion 3\n";

    return (a + b);
}
int add(double a, int b)
{
    cout << "funton 4\n";
    return (a + b);
}
int a, b, c;
int main()
{

    cout << "enter your value\n";
    cin >> a >> b >> c;
    c = add(a, b, c);
    cout << "addition of two vareable :" << c << endl;
    cout << "addition of two vareable :" << add(30, 23.32) << endl;
    cout << "addition of two vareable :" << add(34.3, 33) << endl;
    cout << "addition of two vareable :" << add(22.33, 22.33) << endl;
    cout << "addition of two vareable :" << add(22, 33, 24) << endl;

    return 0;
}