#include<iostream>
using namespace std;
int counting(int n)
{
    if(n<=0)
    {
        return 1;
    }
    // cout<<n<<endl;
    counting(n-1);
    cout<<n<<endl;
    
}

int main()
{
    int n;
    cout <<"enter your number 'N'\n";
    cin>>n;
    cout<<"your number is \n";
    counting(n);
    return 0;
}