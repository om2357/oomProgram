#include<iostream>
using namespace std;
int power(int n , int p)
{
    if(p==0)
    {
        return 1;
    }
    else
    {
        return (n*power(n,p-1));
    }
  
};
int main()
{
    int n =30;
    int p =30;
    cout<< "enter your value of N\n";
    cin>>n;
    cout<<"enter your value of power\n";
    cin>>p;
    cout <<power(n,p);
    return 0;
}