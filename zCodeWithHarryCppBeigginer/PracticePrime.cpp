#include<iostream>
using namespace std;
int main()
{

    int factor = 0;
    int number;
    cin>>number;
    for(int div = 1;div <=number;div++)
    {
        if(number%div==0)
        {
            factor=factor+1;
        }
    }
    if(factor ==2)
    {
        cout<<"this is a prime number\n";
    }
    else
    {
        cout<<"this is not a prime";
    }

    return 0;
}