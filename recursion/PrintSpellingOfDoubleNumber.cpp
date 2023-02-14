#include<iostream>
//#include <string>
using namespace std;
int printspell(int n, string spel[])
{
    if(n==0)
    {
        return 0;
    }
    printspell (n/10,spel);
    int number = n%10;
    cout<<spel[number]<<" ";
}
int main()
{
    int n;
    cout<<"enter your value\n";
    cin>>n;
    string spel[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<"answer is :";
    printspell(n,spel);

    return 0;
}
