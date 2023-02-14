#include <iostream>
using namespace std;
int main()
{

    int num;
    cout << "enter your number num \n";
    cin >> num;
    int i = 1;

    while (i<=num)
    {
        int j= 1;
        while(j<=i)
        {
            cout<<"*"<<" ";
            j=j+1;
        }
        cout<<endl;
        i = i+1;
    }



    return 0;
}
