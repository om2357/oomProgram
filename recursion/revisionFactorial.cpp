#include<iostream>
using namespace std ;
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }

     return n*factorial(n-1);
    //or we can also write like this
    // int smalloutput = factorial(n-1);
    // int output =n * smalloutput ;
    // return output;

}

int main()
{
    int n;
    cout<<"enter your factorial value\n" ;
    cin>>n;
    cout <<"your factorial value is :"<<factorial(n);

    return 0;
}