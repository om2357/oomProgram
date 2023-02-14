#include <iostream>
using namespace std;
int main()
{
    int a = 65;
    char c = a; // this is a imlesit typecast ,,.. in this system will automaticaly typecast for you
    cout << "here this will print like a char and char will read only one bit" << c << endl;

    int *p = &a;               //*p will point the &a then in the add of a is 65
    char *pa = (char *)p;      // explecet typecast (jaberdasti) here we will typecast Int *p to Char
    cout << pa << endl;        //*pa will behabe like char
    cout << *p << endl;        //*p will direct approach the int a then print only 65 because it will read the four bit
    cout << *pa << endl;       // this will print char value because it will typecast into char (Line no. 10) approach the char
    cout << *(pa + 1) << endl; // this will print the null value
    cout << *(pa + 2) << endl; // this will print the null value
    cout << *(pa + 3) << endl; // this will print the null value
        //    mostly are little endian here we have also little endian this are written in first and then assign null character
                               //    big endian is just oposite of little endian
    return 0;
}