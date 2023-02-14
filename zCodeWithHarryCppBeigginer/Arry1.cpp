#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter your array \n";
    cin >> n;
    int array[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter your array value\n";
        cin >> array[i];
    }
    for (int i =0; i < n; i++)
    { 
        
        cout <<array[i]<< ",";
    }
    return 0;
}
