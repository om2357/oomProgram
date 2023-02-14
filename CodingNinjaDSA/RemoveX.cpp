// by coding ninja
#include <iostream>
using namespace std;
void RemoveX(char str[])
{
    if (str[0] == '\0')
    {
        return;
    }
    if (str[0] != 'x')
    {
        RemoveX(str + 1);
    }
    else
    {
        int i = 1;
        for (;str[i] != '\0'; i++)
        {
            str[i - 1] = str[i];
        }
        str[i - 1] = str[i];
        RemoveX(str);
    }
}

int getLength(char str[])
{
    if (str[0] == '\0')
    {
        return 0;
    }
    int smallLength = getLength(str + 1);
    return 1 + smallLength;
}
int main()
{
    char str[20];
    cout << "enter your value in char : ";
    cin >> str;
    cout << "your string value is : " << str << endl;
    int length = getLength(str);
    cout << "your string length is :" << length<<endl;
    cout<<"your x will removed";
    RemoveX(str);
    cout<<endl;
    cout <<"your string value is : "<< str << endl;
    //getLength(str);
    cout<< "your string length is :" <<length;
     

    return 0;
}