#include <iostream>
using namespace std;
int fibonacci (int n)
{
    if(n==1)
    {
        return 1;
    }
    if(n==0)
    {
        return 0;
    }

    return n= fibonacci(n-1)+fibonacci(n-2); 
}

int main()
{
    int n;
    cout << "enter your value of n \n";
    cin >> n;
    cout << "your value is :" << fibonacci(n);
    return 0;
}