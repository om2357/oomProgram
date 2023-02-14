#include<iostream>
using namespace std;
int numbers(int n)
{
    if(n==1)
    {
        cout<<"1"<<endl;
        return 1;
    }
    // int i = (n-1);
    // cout<<i<<" ";
    // //i++;
    numbers(n-1);
    cout<<n<<endl;
}


int main()
{
    int n;
    cout<<"enter the value of N\n";
    cin >>n;
    cout<<numbers(n);
    return 0;
}