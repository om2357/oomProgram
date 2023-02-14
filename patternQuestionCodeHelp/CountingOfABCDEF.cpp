#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter your number \n";
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int j = 1;
        
        while (j <= n)
        {
            char start = 'A';
            cout << start <<" ";
            start = start + 1;
            j = j + 1;
            
        }
        cout<<endl;
        i=i+1;
    }

    return 0;
}