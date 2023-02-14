#include <iostream>
using namespace std;
int length(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }
    int SmallStringLength = length(str + 1);
    return 1 + SmallStringLength;
}
int main()
{
    char str[20];
    cout << "enter your string  : ";
    cin >> str;
    int l = length(str);
    cout << l;
    return 0;
}