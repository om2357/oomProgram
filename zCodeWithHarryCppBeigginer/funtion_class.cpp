#include <iostream>
using namespace std;
int maximum(int a, int b);
int main()
{
    int a, b;
    cout << "enter the values To find greattest number\n";
    cin >> a >> b;
    int c = maximum(a, b);
    cout << "your gratest number is " << c;
    return 0;
}
int maximum(int x, int y)
{
    if (x > y)
        return x;
    else
    {
        return y;
    }
}