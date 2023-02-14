#include<iostream>
using namespace std;
int printSpel(int n ,string str[])
{
    if(n==0)
    {
        return 0;
    }

    printSpel(n/10,str);
    int number = n%10;
    cout<<str[number]<<" ";
}
int main()
{
    int n;
    cout<<"enter your number\n";
    cin>>n;
    string str[10]={"zero","one","teo","three","four","five","six","seven","eight","nine",};
    cout<<"your ansewr is : ";
    printSpel(n,str);

    return 0;

}