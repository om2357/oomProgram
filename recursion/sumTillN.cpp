#include<iostream> // addition of sum ,till n;
using namespace std;
int sum(int n)
{
    if (n==0)
    {
        return 0;
    }

    int summ = sum(n-1);
    return n+summ;
}
int main()
{
    int n ;
    cout <<"enter your sum value \n";
    cin>>n;
    cout<<"your sum value is : "<<sum(n);
    return 0;
}