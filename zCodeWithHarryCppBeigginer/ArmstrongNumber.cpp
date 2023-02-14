#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int number;
    cout << "enter a numbe\n";
    cin >> number;
    int sum = 0;
    int num = number;
    while (number > 0)
    {
        int lastDigit = number % 10;
        sum+= pow(lastDigit, 3);
        number = number / 10;
    }
    cout<<num;
    cout<<number<<endl;
    cout<<sum;

    

    return 0;
}