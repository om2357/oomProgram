#include <iostream>
using namespace std;
int main()
{
    int number;                         //how to reverse a number 

    cout << "enter a number\n";
    cin >> number;
    int reverse = 0;
    while (number > 0)
    {
        int lastDigit =number%10;
        reverse = reverse*10+lastDigit;
        number=number/10;

    }
    cout<<reverse;
    return 0;
}