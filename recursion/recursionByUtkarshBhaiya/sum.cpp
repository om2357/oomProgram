#include<iostream>
using namespace std;
int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    sum(n-1);
    // return sum(n-1)+n;
    int ans = sum(n-1);
    return ans + n;
}
int main()
{
    int n;
    cout<<"enter your value\n";
    cin>>n;
    cout<<"your value of sum is " <<sum(n); 


    return 0;
}