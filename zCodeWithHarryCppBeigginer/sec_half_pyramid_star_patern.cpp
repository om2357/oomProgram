#include <iostream>
using namespace std;
int main()
{
    int i, j, n;                                          //  ****
                                                          //  **
    cout << "enter your star value\n";                    //  *
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j = i; j >=1 ; j--)
        {
            cout << "*";
        }


        cout << endl;
    }

    return 0;
}