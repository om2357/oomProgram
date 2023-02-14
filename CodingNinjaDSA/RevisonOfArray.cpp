#include <iostream>
using namespace std;
int main()
{
    int *p = new int;
    cout << "addres of your P variable " << p << endl;
    *p = 10;
    cout << *p << endl;
    delete p;
    int n;
    cout << "enter the N\n";
    cin >> n;
    int *pa = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter array value :";
        cin >> pa[i];
    }
    int max = -1234;
   
    for(int i = 0; i<n;i++)
    {
        if (max<pa[i])
        {
            max = pa[i];
        }
    }
    cout<<"your max value is :"<<max;
    delete []pa;
    return 0;
}