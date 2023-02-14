// Number is prime or not

#include <iostream>
using namespace std;
int main()
{
    int Times;
    cout << "how much time you have to cheeck the number\n";
    cin >> Times;
    for (int i = 0; i < Times; i++)
    {
        int number;
        int factor = 0;
        cout << "enter a number \n";
        cin >> number;

        for (int div = 1; div <= number; div++)
        {
            if (number % div == 0)
            {
                factor = factor + 1;
            }
        }
        if (factor == 2)
        {
            cout << "number is prime \n";
        }
        else
        {
            cout << "number is not primre\n";
        }
    }
}