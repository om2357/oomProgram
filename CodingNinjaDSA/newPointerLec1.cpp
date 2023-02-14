#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<&i<<endl;
    int *point = &i;
    cout<<point<<endl;

    float f = 10.2;
    float *fp = &f;

    cout<< fp;
    return 0;
}