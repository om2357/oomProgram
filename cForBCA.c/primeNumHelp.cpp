#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number for check prime or not = ";
    cin>>n;
    int i = 2;
    while(i<n )
    {
    if(n%i == 0)
        cout<<"this is not a prime number" << i << endl;
        else{
            cout<<"this is a prime number"<<i<<endl;
        }
        i= i+1;
    }
    return 0;
}