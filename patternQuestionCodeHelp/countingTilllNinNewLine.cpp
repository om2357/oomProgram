#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "enter your value of n\n";
    cin >> num;
    int i = 1;
    int count = 1;
    while (i <= num)
    {
        int j = 1;
        while (j <= num)
        {
            cout << count << " ";
            //her we want to increase the value of count 
            //if we can not increase the value of count then we got only (1)
            count = count + 1;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }

    return 0;
}