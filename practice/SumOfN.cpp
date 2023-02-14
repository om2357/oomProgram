#include<iostream>
using namespace std;
int main()
{
    int n ;
    cout<<"enter your value of n\n";
    cin>>n;
    int sum = 0;
    for(int i = 1 ; i<= n ;i++)
    {
        //cout<<i<<endl;
        //cout<<sum<<endl;
        sum= sum + i;
        cout<<sum;
        
    }
    cout<<"sum of n number is "<<sum;

    return 0;
}