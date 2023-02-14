#include <iostream>
using namespace std;
int main()
{
    int m;
    int n;
    cout<<"enter the value of 'm' and 'n' \n";
    cin >> m >> n;
    int** p = new int*[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[i];
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        delete[] p[i];
    }

    delete[] p;

    return 0;
}