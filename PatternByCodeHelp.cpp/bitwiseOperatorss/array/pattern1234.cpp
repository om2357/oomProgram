#include<iostream>
using namespace std;
int main()
{
    int n;
    int i = 1;
    cin>> n;
    while(i<=n)
    {
        int j = 1;
        while(j<=n)
        {
            cout<<j;
            j= j+1;
        }
        cout<<endl;
        i=i+1;
    }
    return 0;
}