#include <iostream>
using namespace std;
int main()
{
    // we can Alocate memory in HEAP using new keyword
    int *p = new int;
    *p = 10; // here we can allocate memory in heap
    cout << *p << endl;
    delete p;
     
    // we cfan also store double char float

    double *pd = new double;
    delete pd;  
    // we can also allocate array
    int n;
    cout <<"enter value of n ";
    cin >> n;
    int *pa = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << "enter array value\n";
        cin >> pa[i];
    }

    int max = -1222;
    for (int i = 0; i < n; i++)
    {
        if (max < pa[i])
        {
            max = pa[i];
        }
    }
    cout << "your max value is " << max;
    delete [] pa;
    int *pa2 = new int[50];
    delete pa2;

    return 0;
}