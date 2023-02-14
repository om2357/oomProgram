#include <iostream>
using namespace std;
void ReverseString(char name[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(name[start++], name[end--]);
    }
}
int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cout << "enter your name \n";
    cin >> name;

    cout << "your name is : " << name << endl;
   int length = getLength(name);
   cout << "array strimg legth is " << length << endl;

    cout << "your reverse String is ";
    ReverseString(name, length);
    cout << name << endl;

    return 0;
}
